#include<iostream>
using namespace std;
int main()
{
  int arr[10],copy[10];
  int i,n,m,p,q;
  cin>>n>>m>>p>>q;
  for(i=0;i<n;i++)
   cin>>arr[i];
  if(m+p-2>n-1 || q+m-2>n-1)
    cout<<"not possible";  
  else{	
  for(i=0;i<=n-1;i++)
  {    
   if(i>=q-1 && i<q-1+m)
    copy[i]=arr[p-1+(i-q+1)];
	
  else
   copy[i]=arr[i];	
  }
 }
 for(i=0;i<n;i++)
   cout<<copy[i]<<"\t"; 
   return 0;
 }  