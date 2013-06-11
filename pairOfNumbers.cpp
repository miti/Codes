#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
  int a,b,count;
  int n,k,i;
  cin>>n;
  k=n;  
  for(i=2;i<=n/2;i++)
  {
    a=n;
    b=i;
	count=0;
    for(;a>1 && b>1;count++)
    {
	  int temp=min(a,b);
	  a=fabs(a-b);
	  b=temp;
	}
    if(a==1 && b==1)
     k= min(k,count);
  }
  cout<<"Required is"<<k;
  return 0;
}  
	