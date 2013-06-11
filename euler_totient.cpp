#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int x)
{
 for(int i=2;i<=sqrt(x);i++)
 {
   if(x%i==0)
    return false;
 }
 return true;
} 
int main()
{
  int i,n,pow=0,phi=1,m;
  cin>>n;
  m=n;
  while(n%2==0)
  {
    pow++;
    n=n/2;
  }     
  if(m!=n)
    phi*=(m/n)/2;
  for(i=3;n>1&&i<=sqrt(n);i=i+2)
  { 
    m=n;
    pow=0;
    while(n%i==0)
    {
      pow++;
      n=n/i;
    }
        if(pow==1)
          phi*=(i-1);
    else if(pow>1)
     phi*=(i-1)* (m/n)/i;
  }      
  if(n==1)
   cout<<phi;
  else if(isPrime(n))
   cout<< phi*(n-1);   
  return 0; 
}   