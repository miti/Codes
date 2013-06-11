#include<iostream>
using namespace std;
int main()
{
 int key,n,i,f,l,temp;
 int arr[50];
 cin>>n;
 cin>>key;
 for(i=0;i<n;i++)
  cin>>arr[i]; 
 f=0;
 l=n-1;
 while(f!=l)
 {
   while(f<l && arr[f]<=key){f++;}
   while(l>f && arr[l]>key){l--;}
   if(arr[f]==arr[l])
   {
     f++;
	 l--;
   }
  // cout<<"f is"<<arr[f]<<"\t l is"<<arr[l];
   if(f!=l)
   {
    temp= arr[f];
    arr[f]=arr[l];
    arr[l]=temp;
   }   
 /*  for(i=0;i<n;i++)
  cout<<arr[i]<<" ";*/
 }
 for(i=0;i<n;i++)
  cout<<arr[i]<<" ";
 return 0;
} 