#include<iostream>
using namespace std;
int main()
{
 int i,n;
 long f=1;
 cin>>n;
 for(i=2;i<=n;i++)
 {
   while(i%10==0)
   {
     i=i/10;
   }
   while(f%10==0)
   {
     f=f/10;
   }
   f=(f%10)*(i%10);
 }  
 while(f%10==0)
 {
     f=f/10;
 }
 cout<<f%10;
 return 0;
} 