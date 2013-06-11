#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int main()
{
  int arr[10][10];
  int c[10][10];
  int i,j,m,n,a,b,steps=0;
  cin>>m>>n;
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
     cin>>arr[i][j];
  cin>>a>>b;
  queue<pair<int,int> > adjacent;
  int visited[10][10];
  adjacent.push(make_pair(a,b));
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    visited[i][j]=0;
  for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
     c[i][j]=m*n;
    } 	
	c[a][b]=0;
  while (!adjacent.empty())
  {
    pair<int,int> p;
	p = adjacent.front();
	i=p.first;
	j=p.second;
	visited[i][j]=1;	
	if(j+1<n && (visited[i][j+1]==0 || c[i][j+1]<m*n) && arr[i][j+1]==0)
	 {
	   if(j+1==n-1)
	   {
	    c[a][b]=c[i][j]+1;
	    break;
	   }
	   adjacent.push(make_pair(i,j+1));
	  c[i][j+1]=c[a][b]+1;
	  }
	if(i+1<m && (visited[i+1][j]==0 || c[i+1][j]<m*n) && arr[i+1][j]==0)
	 {
	   if(i+1==m-1)
	   {
	    c[a][b]=c[i][j]+1;
	    break;
	   }
	  adjacent.push(make_pair(i+1,j));
	  c[i+1][j]=c[a][b]+1;
	  }
	if(j-1>=0 && (visited[i][j-1]==0 || c[i][j-1]<m*n) && arr[i][j-1]==0)
	 {
	   if(j-1==0)
	   {
	    c[a][b]=c[i][j];
	    break;
	   }
	  adjacent.push(make_pair(i,j-1));
	  c[i][j-1]=c[a][b]+1;
	  }
	if(i-1>=0 && (visited[i-1][j]==0  || c[i-1][j]<m*n) && arr[i-1][j]==0)
	 {
	 if(i-1==0)
	   {
	    c[a][b]=c[i][j]+1;
	    break;
	   }
	 adjacent.push(make_pair(i-1,j));
	 c[i-1][j]=c[a][b]+1;
	 }
	 adjacent.pop();
    	
   }
   for(i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
    {
     cout<<c[i][j]<<"\t";
    } 
   cout<<"\n";
  }   
cout<<c[a][b];
return 0;
}   