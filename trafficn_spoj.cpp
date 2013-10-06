#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
 unsigned int distance[50];
 int edge[50][50],cost[50][50],v[50],trial[50][50],visited[50],cost_new[50][50],v2[50];
 int i,j,n,m,k,s,t,next,total=0,dist,temp;
 cin>>n>>m>>k>>s>>t;
 memset(v,0,sizeof(int)*(n+1));
 memset(v2,0,sizeof(int)*(n+1));
 memset(distance,1,sizeof(int)*(n+1));
 memset(visited,0,sizeof(int)*(n+1));
 for(i=0;i<m;i++)
 {
  int a,b,c,t;
  cin>>a>>b>>c;
  t=++v[a];
  edge[a][t]=b;
  cost[a][t]=c;
 } 
 for(i=0;i<k;i++)
 {
  int a,b,c,t;
  cin>>a>>b>>c;
  t=++v2[a];
  trial[a][t]=b;
  cost_new[a][t]=c;
  cout<<i<<" t"<<t<<"\n";
 }
 int p=1;
 distance[s]=0;
 for(i=1;i<=n;i++)
  cout<<distance[i]<<"\n visited "<<visited[i];
  total=distance[s];
 for(i=s;visited[i]==0 && i!=t && v[i]>0;)
 {
   dist=100000;
   for(j=1;j<=v[i];j++)
   {    
    cout<<"\n i "<<i<<" "<<total<<"\n";   
    if(visited[edge[i][j]]==0 && distance[edge[i][j]]>(distance[i]+cost[i][j]))
     {
         distance[edge[i][j]]=distance[i]+cost[i][j];
         cout<<"distance chng "<<distance[edge[i][j]];
     }   
     if(visited[edge[i][j]]==0 && dist>distance[edge[i][j]])
     {       
       dist=distance[edge[i][j]];
       next=edge[i][j];
       cout<<i<<" to next "<<next<<"\n";
     } 
    //cout<<"dstnce"<<edge[i][j]<<" "<<distance[edge[i][j]]<<"\n";    
   }
   total=distance[next];
   visited[i]=p++;   
   i=next;
   
 }   
 cout<<"\n initally "<<total<<"\n";
 temp=total;
 for(i=1;i<=n;i++)
 {
   cout<<i<<"checking\n";
   for(j=1;visited[i]>=0 && j<=v2[i];j++)
   {
    cout<<"cost is "<<cost_new[i][j];
    signed int f=(distance[trial[i][j]]-distance[i])-cost_new[i][j];
    cout<<"\nchange f"<<f<<"\n";
    if(visited[trial[i][j]]>0 && visited[i]<visited[trial[i][j]] && f>0)
        {
          f=temp-f;
          cout<<"\nchange in total\n"<<f;
          total=min(total,f);          
        }
   }
 }
 cout<<"\n total "<<total;
} 