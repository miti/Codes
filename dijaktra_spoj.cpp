#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int edge[10000][10000],cost[10000][10000],v[10000],visited[10000],v2[10000],previous[10000];
int main()
{
 unsigned int distance[10000]; 
 int i,j,n,m,k,s,t,next,total=0,dist,temp,l;
 cin>>n>>m>>k>>s>>t;
 memset(v,0,sizeof(int)*(n+1));
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
 int ne=1;
 visited[s]=1; 
 distance[s]=0;
 int p;
 while(ne<n){
 dist=100000;
 for(i=1;i<=n;i++)
 {
   for(j=1;visited[i]>0 && j<=v[i];j++)
   {    
    
    if(visited[edge[i][j]]==0 && dist>(distance[i]+cost[i][j]))
     {
         dist=distance[i]+cost[i][j];
         previous[edge[i][j]]=i;
         next=edge[i][j];
         p=i;                
     }         
   }   
 }
 distance[next]=dist;
 visited[next]=visited[p]+1;     
 ne+=1; 
}
total=distance[t]; 
 for(i=0;i<k;i++)
 {
  int a,b,c,t,x;
  cin>>a>>b>>c;
  if(distance[a]>distance[b])
  {
    temp=a;
	a=b;
	b=temp;
  }
  if(distance[a]+c<distance[b])
  {
    int new_dist=distance[a]+c;
    if(visited[a]==0)
      x=visited[previous[a]]+1;
    else
      x=visited[a];    
    memset(v2,0,sizeof(int)*(n+1));
    for(l=b;l!=t && v[l]>0;) 
    {
      dist=100000;
      for(j=1;j<=v[b];j++)
      {
        if((visited[edge[l][j]]>=x || visited[edge[l][j]]==0)&& v2[edge[l][j]]==0 && distance[edge[l][j]]>(new_dist+cost[l][j]) && dist>new_dist+cost[l][j])
        {
          dist=new_dist+cost[l][j]; 
          next=edge[l][j];          
        }
      }
      new_dist=dist;
      v2[l]=1; 
      l=next;
    }
    total=min(new_dist,total);    
  }
 }
 cout<<"\n total "<<total;
 return 0;
} 