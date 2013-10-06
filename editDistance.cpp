#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
 string a,b;
 int n,m,i,j,arr[2005][2005],cost=0,t;
 cin>>t;
 for(int k=0;k<n;k++)
 {
 cin>>a>>b;
 n=a.length();
 m=b.length();
 memset(arr,0,sizeof(int)*(n+1)*2005);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=m;j++)
  {
   if(a[i-1]==b[j-1])
    cost=0;
   else 
    cost=1;
   arr[i][j]=min(arr[i-1][j]+1,min(arr[i][j-1]+1,arr[i-1][j-1]+cost));
  }
 }
  cout<<arr[n][m]<<"\n";
 } return 0;
}  