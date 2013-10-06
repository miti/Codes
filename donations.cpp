#include<iostream>
using namespace std;
int main()
{
  int a[100],n,i,odd=0,even=0,funds,upper;
  cin>>n;
  for(i=0;i<n;i++)
   cin>>a[i];
  upper=n; 
  if(n%2!=0)
    upper=n-1;
  for(i=0;i<upper;i++)
  {
    if(i%2==0)
	 even+=a[i];
	else
     odd+=a[i];
  }	
  funds=max(even,odd);
  if(n%2!=0)
   funds=max(funds,odd-a[0]+a[n-1]);
  cout<<funds;
  return 0;
}  
 	