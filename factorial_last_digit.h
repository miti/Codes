#include<iostream>
using namespace std;
int main()
{
 int i,n,k;
 long f=1;
 cin>>n;
 for(i=2;i<=n;i++)
 {
   k=i;
   while(k%10==0)
   {
     k=k/10;
   }
   while(f%10==0)
   {
     f=f/10;
   }
   f=(f%10)*(k%10);
 }  
 while(f%10==0)
 {
     f=f/10;
 }
 cout<<f%10;
 return 0;
} 