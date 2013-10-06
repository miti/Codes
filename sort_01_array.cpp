#include<iostream>
using namespace std;
int main()
{
 int arr[50],n,i,j,f,k;
 cin>>n;
 f=-1;
 int next=-1;
 for(i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 for(i=0;i<n;i++)
 {
  if(f==-1 && arr[i]==1)
   f=i;
  else if(next==-1 && arr[i]==1)
   next=i;
 else if(arr[i]==0 && f!=-1)
   {
    arr[i]=1;
    arr[f]=0;
    if(next==-1)
        f=i;
    else
    {
       f=next;
       for(k=f+1;k<i;k++)
       { 
	   if(arr[k]==1)
       {	   
       break;
       }
       }
       next=k;       
    }   
   }   
  } 
 for(i=0;i<n;i++)
  cout<<arr[i]<<"\n";
 return 0;
} 