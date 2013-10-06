#include<iostream>
using namespace std;
int gcd(int x,int y)
{
 while(x%y!=0)
 {
  long long r=x%y;
  long long t=y;
  y=r;
  x=t;
 }
 return y;
}
int main()
{
 int i,a,b,c,t=0,n=0;
 cin>>a>>b>>c;
 t=(a+1)*(b+1);//-(a*(a+1)/2);
 n=t;
 cout<<t<<"\n";
 for(i=0;i<=a;i++)
 {
  int d=c-i;
  if(d<b)
   n=n-(b-d)-1;
 }
 
 cout<<n<<"\n";
 int g=gcd(t,n);
 cout<<n/g<<"/"<<t/g;
 return 0;
} 