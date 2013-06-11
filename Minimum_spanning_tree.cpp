#include<iostream>
using namespace std;
int main()
{
 int n,m,i,j,dist,total=0,next;
 int edge[50][50],cost[50][50];
 int v[50];
 cin>>n>>m; 
 memset(v,0,sizeof(int)*n);
 for(i=0;i<m;i++)
 {
  int a,b,c,t;
  cin>>a>>b>>c;
  t=++v[a];
  edge[a][t]=b;
  cost[a][t]=c;
 }
 
 for(i=1;i<n || v[i]==0;)
 {
  next=i;
  dist=0;
  for(j=1;j<=v[i];j++)
  {
   if(dist<cost[i][v[i]])
   {
     dist=cost[i][v[i]];
	 next=edge[i][v[i]];
   }
  }
  total+=dist;
  i=next;
 }
 if(i==n)
  cout<<total;
 else
 cout<<"not psbl";
 return 0;
} 
 