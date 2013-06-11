#include<iostream.h>
using namespace std;
long factorial(int n)
{
if(n==1)
 return 1;
return n*factorial(n-1); 
}
int main()
{
  int n;
  long f;
  cin>>n;
  f=factorial(n);
  while(f>=1)
  {
   if(f%10==0)
    f=f/10;
   else
  {
    cout<<f%10;
    break;	
  }
  }
  return 0;
}  