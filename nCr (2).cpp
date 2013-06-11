#include<iostream>
using namespace std;
int main()
{
  int n,r,i,j;
  double result=1;
  cin>>n>>r;
  for(i=n,j=r;i>=n-r+1 && j>=1;i--)
  {
    long long temp =(result*i);
    if(temp%j==0)
	{
	result=(temp*i)/j;
	j--;
	}
    else
    {
	 result*=i;	 
    }	
  }
  while(i>n-r)
  {
    result*=i;  
	i--;
  }
  while(j>1)
  {
    result/=j;
    j--;
  }
  cout<<result;
  return 0;
}  