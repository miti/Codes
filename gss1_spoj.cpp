#include<iostream>
using namespace std;
int main()
{
 int arr[50],n,m,i,j,cs,ms,k;
 cin>>n;
 for(i=0;i<n;i++)
  cin>>arr[i];
 cin>>m;
 for(k=0;k<m;k++)
 {
 int x,y;
 cin>>x>>y;
 x=x-1;
 y=y-1;
 ms=0;
 cs=0;
 i=x;
 for(j=i;j<=y;j++)
 {
   cs+=arr[j];
   if(cs>ms)
    cs=ms;
   if(cs<0)
   {
    cs=0;
    i=j+1;
   }
 }
 cout<<ms<<"\n";
 }
 return 0;
} 