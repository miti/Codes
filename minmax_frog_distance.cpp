#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
 unsigned int distance[100][100]; 
 int i,j,k,n,m;
 cin>>n;
 memset(distance,1,sizeof(int)*(100)*(100)); 
 for(i=0;i<n-1;i++)
 {
  int a,b,c;
  cin>>a>>b>>c;
  distance[a-1][b-1]=c;
  distance[b-1][a-1]=c;  
 }
 for(i=0;i<n;i++)
 {
  distance[i][i]=0;
  st[i][i]=0;
  lt[i][i]=0;
 }
 for(k=0;k<n;k++)
 {
  for(i=0;i<n;i++)
  {
   for(j=0;j<n;j++)
   {
      distance[i][j]=min(distance[i][j],max(distance[i][k],distance[k][j]));         
    }
    }
   }
  }  
  cin>>m;
  for(i=0;i<m;i++)
  {
   int a,b;
   cin>>a>>b;
   cout<<distance[a-1][b-1]<<"\n";
  } 
  return 0;
 } 