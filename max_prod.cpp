#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int arr[50];
  int i,j,maxProd=1,prod=1,n,neg=1,c=0,negStart;
  cin>>n;
  for(i=0;i<n;i++)
   cin>>arr[i];
  i=0; 
  for(j=0;j<n;j++)
  {  
    cout<<"\n---------Change----------* "<<neg<<"\t"<<prod<<"\t"<<maxProd;
    if(arr[j]<0 && c==0)
	{
	  c++;     
	  neg*=arr[j];
	  negStart=j;
	  cout<<"\n here 1\n";
    }
	else if(c==1 && arr[j]!=0)
	{
	  neg*=arr[j];
	  if(neg>0)
	  {
	   prod*=neg;
	   neg=1;
       c=0;	 
       cout<<"here 2\n";	   
      }	  
	  cout<<"here 3\n";
    }	
	if(c==0 && arr[j]>0){
	 prod*=arr[j];	
     cout<<"here 4\n";	 
	}
	else if(arr[j]==0)
	{
	  if(neg<0)
	  {
	    maxProd=max(maxProd,neg/arr[negStart]);
	  }
	  if(arr[i]<0 && neg<0)
	    maxProd=max(maxProd,prod*neg/arr[i]);
	  prod=1;
	  neg=1;
	  i=j+1;
	  cout<<"here 5\n";
	}
	maxProd=max(maxProd,prod);
	cout<<"here 6\t"<<maxProd;
  }
    if(neg<0)
	  {
	    maxProd=max(maxProd,neg/arr[negStart]);
	  }
	 if(arr[i]<0 && neg<0)
	    maxProd=max(maxProd,prod*neg/arr[i]); 
   cout<<"\n"<<maxProd;
   return 0;
}   