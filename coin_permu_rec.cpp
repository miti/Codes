#include<iostream>
using namespace std;
int coin[]={2,3,7};
int ways(int sum,int pos){
 int s=0;
 if(sum==0)
  return 1;
 if(sum<0)
  return 0; 
 if(pos<0 && sum>=1)
  return 0;
 for(int i=0;i<coin.length();i++)
  s+=ways(sum-coin[i],pos);
 return s;  
}
 int main()
{
 int n;
 cin>>n;
 cout<<ways(n,2); 
 return 0;
}