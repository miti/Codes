#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 string a,b;
 int arr[27],brr[27];
 int t,i,j;
 cin>>t;
 for(i=0;i<t;i++)
 {
  memset(arr,0,sizeof(int)*27);
 memset(brr,0,sizeof(int)*27);
  cin>>a>>b;
  for(j=0;j<a.length();j++)
  {
    arr[a[j]-97]++;   
  }
  for(j=0;j<b.length();j++)
  {
    brr[b[j]-97]++;
   }
  for(j=0;j<26;j++)
  {
   if(arr[j]!=brr[j])
    break;
  }
  if(j==26)  
   cout<<"\nYES";
  else cout<<"\nNO"; 
  }
  return 0;
}  