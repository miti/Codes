#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 long long n,r,d,coin,i;
 cin>>n;
 r=n%3;
 d=n/3;
 if(n==1 || r==0)
  cout<<"direct"<<1;
 else {
  coin=1;
  d=d*3;
  while(d>0){
  long long x=d;
  for(i=1;pow(3,i)<=x;i++);
  x=pow(3,i-1);
  coin+=(d/x);
  d=d-x*(d/x);
 // cout<<d<<" "<<x<<"\n";
  }
  cout<<coin;
 }  
 return 0;
} 