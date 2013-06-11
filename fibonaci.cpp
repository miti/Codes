#include<iostream>
using namespace std;
int F[2][2]={{1,1},{1,0}};
int M[2][2]={{1,1},{1,0}};
void multiply(int F[2][2],int M[2][2])
{
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];  
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];  
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1]; 
   F[0][0] = x; 
   F[0][1] = y;  
   F[1][0] = z; 
   F[1][1] = w; 
}
void power(int F[2][2],int p)
{
  if(p==0 || p==1)
  return;  
  power(F,p/2);
  multiply(F,F);
  if(p%2==1)
   multiply(F,M);   
}  
int main()
{
  int n,i=1;
  cin>>n;
  if(n==0)
   cout<<"0";
  else
  {
   power(F,n-1);
   cout<<F[0][0];
  }   
  
}  