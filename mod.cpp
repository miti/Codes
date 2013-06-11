#include<iostream>
using namespace std;
long power(int n,int p,int m)
{
  int mod;
  if(p==1){
   mod= n%m;
   return mod;   
  }   
  else
  {
   if(p%2!=0)
   {
   long temp = power(n,(p-1)/2,m);
   mod = ((n%m)*temp*temp)%m;
   return mod;
   }
   else
   {
     long temp = power(n,p/2,m);     
	 return temp*temp; 
   } 
  //cout<<n<<"\t"<<mod<<"\n";    
  }
}
int main()
{
 int n, p,m;
 cin>>n>>p>>m;
 long x = power(n,p,m);
 cout<<x%m;
 return 0; 
}