#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
 unsigned int distance[100][100];
 unsigned int st[100][100];
 int lt[100][100];
 int i,j,k,n,m;
 cin>>n;
 memset(distance,1,sizeof(int)*(100)*(100));
 memset(st,1,sizeof(int)*(100)*(100));
 memset(lt,-1,sizeof(int)*(100)*(100));
 for(i=0;i<n-1;i++)
 {
  int a,b,c;
  cin>>a>>b>>c;
  distance[a-1][b-1]=c;
  distance[b-1][a-1]=c;
  st[a-1][b-1]=c;
  st[b-1][a-1]=c;
  lt[a-1][b-1]=c;
  lt[b-1][a-1]=c;
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
     if(distance[i][k]+ distance[k][j]<distance[i][j])
     {
         distance[i][j]=distance[i][k]+distance[k][j];
         st[i][j]=min(st[i][j],min(st[i][k],st[k][j]));
         lt[i][j]=max(lt[i][j],max(lt[i][k],lt[k][j]));                
         }
    }
   }
  }  
  cin>>m;
  for(i=0;i<m;i++)
  {
   int a,b;
   cin>>a>>b;
   cout<<st[a-1][b-1]<<" "<<lt[a-1][b-1]<<"\n";
  } 
  return 0;
 } 