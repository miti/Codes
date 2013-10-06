#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int n,m,i,j,x,total=0,y,dist;
 int edge[50][50],cost[50][50],visited[50];
 unsigned int distance[50];
 int v[50];
 cin>>n>>m; 
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
  t=++v[b];
  edge[b][t]=a;
  cost[b][t]=c;  
 } 
/* for(i=1;i<=n;i++)
  for(j=1;j<=v[i];j++)
  cout<< edge[i][j]<<" "<<cost[i][j]<<"\n";*/
 distance[1]=0;
 visited[1]=1;
 int ne=1;
 while(ne<n){
       dist=9000;
       for(i=1;i<=n;i++)
       {
          if(visited[i]==1){
         for(j=1;j<=v[i];j++){
            if(visited[edge[i][j]]==0){
               if(dist> cost[i][j])
               {
               dist=cost[i][j];
               x=i;
               y=edge[i][j];
               }
            }
         }
          }
       }
       distance[y]=dist;
       visited[y]=1;
       total+=distance[y];
       cout<<"\n"<<x<<" --> "<<y;
       ne=ne+1;
    } 
 cout<<total;    
 return 0;
}