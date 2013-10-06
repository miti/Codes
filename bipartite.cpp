#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int main()
{
 int n,e,i,j,c=1;
 int v[100],edge[100][100],visited[100];
 queue<int> nodes;
 cin>>n>>e;
 memset(v,0,sizeof(int)*n);
 memset(visited,0,sizeof(int)*n);
 for(i=0;i<e;i++)
 {
   int a,b;
   cin>>a>>b;
   a--;
   b--;
   int t=v[a]++;
   edge[a][t]=b;  
 }
 nodes.push(0);
 visited[0]=1;
 while(!nodes.empty())
 {
  i=nodes.front();
  for(j=0;j<v[i];j++)
  {
   if(visited[edge[i][j]]==0)
   {
   nodes.push(edge[i][j]);
   switch(visited[i]){
   case 1:
   visited[edge[i][j]]=2;
   break;
   case 2:
   visited[edge[i][j]]=1;
   break;   
   }
   }else if(visited[i]==visited[edge[i][j]])
    break;
  }
  if(j<v[i])
   break;
  nodes.pop();  
 }
 //for(i=0;i<n && visited[i]==1;i++);
 if(j<v[i] && !nodes.empty())
  cout<<"NO";
  else
  cout<<"YES"; 
 return 0;
} 
  
  