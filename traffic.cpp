#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
 unsigned int distance[50];
 int edge[50][50],cost[50][50],v[50],trial[50][50],visited[50],cost_new[50][50],v2[50],previous[50];
 int i,j,n,m,k,s,t,next,total=0,dist,temp;
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
 int p=1;
 distance[s]=0;
 previous[s]=0;
 for(i=1;i<=n;i++)
  cout<<distance[i]<<"\n visited "<<visited[i];
 int ne=1;
 visited[1]=1;
 while(ne<n)
 {
   dist=10000;
   for(i=1;i<=n;i++)
   {
    if(visited[i]==1){
	for(j=1;j<=v[i];j++){
	if(visited[edge[i][j]]==0 && dist>cost[i][j]){
	   dist=distance[i]+cost[i][j];
      x=i;
      next=edge[i][j];    
	}
    }
	}
   }
   distance[next]=dist;
   previous[next]=i;
   visited[next]=1;
   ne=ne+1;
 }  
 for(i=s;visited[i]==0 && i!=t && v[i]>0;)
 {
   dist=100000;
   for(j=1;j<=v[i];j++)
   {    
    cout<<"\n i "<<i<<" "<<total<<"\n";   
    if(visited[edge[i][j]]==0 && distance[edge[i][j]]>(distance[i]+cost[i][j]))
     {
         distance[edge[i][j]]=distance[i]+cost[i][j];
		 previous[edge[i][j]]=i;
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
 for(i=0;i<k;i++)
 {
  int a,b,c,t,x;
  cin>>a>>b>>c;
  if(distance[a]+c<distance[b])
  {
    int new_dist=distance[a]+c;
	cout<<"new _dst"<<new_dist<<"\n";
    if(visited[a]==0)
	 x=visited[previous[a]]+1;
	else
     x=visited[a];
	cout<<"x"<<x<<"\n"; 
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
		cout<<"next"<<next<<"\n";
       }
      }
      new_dist=dist;
      v2[l]=1;	  
     }
   total=min(new_dist,total);
   cout<<"total chng"<<total<<"\n";
  }
 }
 cout<<"\n total "<<total;
 return 0;
} 