#include<iostream>
#include<algorithm>
using namespace std;
int m,n;
int arr[10][10];
int c[10][10];
int visited[10][10];
int find(int x,int y)
{
  if((x==0 || y==0 || x==m-1 || y==n-1)&& arr[x][y]==0)
   c[x][y]=0;
  else if(visited[x][y]==0)
  {
   visited[x][y]=1;
   if(y-1>=0 &&arr[x][y-1]==0 && visited[x][y-1]==0)
   c[x][y]=min(find(x,y-1)+1,c[x][y]);
   if(y+1<n &&  arr[x][y+1]==0 && visited[x][y-1]==0)
   c[x][y]=min(find(x,y+1)+1,c[x][y]);
   if(x-1>=0 && arr[x-1][y]==0 && visited[x][y-1]==0)
   c[x][y]=min(find(x-1,y)+1,c[x][y]);
   if(x+1<m && arr[x+1][y]==0&& visited[x][y-1]==0)
   c[x][y]=min(find(x+1,y)+1,c[x][y]);
  }  
  return c[x][y];
}
int main()
{  
  int a,b,steps,i,j;
  cin>>m>>n;
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     cin>>arr[i][j];
  cin>>a>>b;
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
     if(arr[i][j]==0 && (i==0 || i==m-1||j==0|| j==n-1))
      c[i][j]=0;
     else c[i][j]=m*n;
    } 
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
     visited[i][j]=0;     
    } 	  
 for(i=0;i<m;i++)
 {
   cout<<"\n";
	for(j=0;j<n;j++)
    {
     cout<<"\t"<<c[i][j];     
    } 
  }	
  steps=find(a,b);
  cout<<"\n"<<steps;
  
} 