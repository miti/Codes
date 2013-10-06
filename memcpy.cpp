#include<iostream>
using namespace std;
int main()
{
  int arr[10];
  int i,n,m,p,q,temp[10],j,k;
  cin>>n>>m>>p>>q;
  for(i=0;i<n;i++)
   cin>>arr[i];
  p--;
  q--;  
  if(m+p-1>n-1 || q+m-1>n-1)
    cout<<"not possible";  
  else
  {	
    if(q>p && q<=p+m-1)
    {
    for(i=0,j=0;q+i<p+m;i++)
	 temp[j++]=arr[q+i];
    }
    k=0;
    for(i=0;i<m;i++)
    {
	  if(j>0 && p+i>=q)
	  arr[q+i]=temp[k++];
	  else
	  arr[q+i]=arr[p+i];
    }	
  } 
 for(i=0;i<n;i++)
   cout<<arr[i]<<"\t"; 
   return 0;
}  