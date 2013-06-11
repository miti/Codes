#include<iostream>
using namespace std;
int main()
{
  int arr[10];
  int i,n,m,p,q;
  cin>>n>>m>>p>>q;
  for(i=0;i<n;i++)
   cin>>arr[i];
  p--;
  q--;  
  if(m+p-1>n-1 || q+m-1>n-1)
    cout<<"not possible";  
  else
  {	
    if(q>p)
    {
    for(i=m-1;i>=0;i--)
	 arr[q+i]=arr[p+i];
    }
    else{
    for(i=0;i<m;i++)
    {	  
	  arr[q+i]=arr[p+i];
    }	
  } 
 }
 for(i=0;i<n;i++)
   cout<<arr[i]<<"\t"; 
   return 0;
}  