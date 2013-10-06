#include<iostream>
using namespace std;
long long gcd(long long x,long long y)
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
 long long n,d,p,q,arr[100],t;
 int k;
 cin>>p>>q;
 cin>>k;
 for(int i=0;i<k;i++)
   cin>>arr[i];
 n=arr[k-1];
 d=1;
 for(int i=k-2;i>=0;i--)
 {
   t=d;
   d=n;
   n=t;
   n=n+(arr[i]*d);
   long long g= gcd(n,d);
   n=n/g;
   d=d/g; 
 }   
 long long g=gcd(p,q);
 if(n==p/g && d==q/g)
  cout<<"YES";
 else cout<<"NO";
 return 0;
} 