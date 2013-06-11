#include<iostream>
#include<algorithm>
using namespace std;
int arr[50];
int m=-9999;
int beauty(int n,int s,int e)
{
   if(n==0 && s==e)
    return arr[s];
   else
   {
    return beauty(n-1,s,(e-s)/4)+beauty(n-1,(e-s)/4+1,2*(e-s)/4+1)+beauty(n-1,2*(e-s)/4+2,3*(e-s)/4+2)+beauty(n-1,3*(e-s)/4+3,e);
   }   
}
int max()
{
  
}
int main()
{
  int n=0,f,pow,t;
  cin>>f;
  t=f;
  while(f%4==0 && f>1)
  {
     n++;
	 f=f/4;
  }
  for(i=0;i<t;i++)
  { 
    arr[i];
	m=max(m,arr[i]);
  }  
  if(n==0)
   cout<<m;
   else
  cout<<m+beauty(n,0,t-1);
  return 0;
}  
  