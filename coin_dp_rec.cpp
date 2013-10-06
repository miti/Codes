#include<iostream>
using namespace std;
int coin[]={2,3,7};
int ways(int sum,int pos){
 if(sum==0)
  return 1;
 if(sum<0)
  return 0; 
 if(pos<0 && sum>=1)
  return 0;
 return ways(sum-coin[pos],pos)+ways(sum,pos-1); 
}
 int main()
{
 int n;
 cin>>n;
 cout<<ways(n,2); 
 return 0;
}