#include<iostream>
using namespace std;
int main()
{
 int n,b,i,j,c=0;
 cin>>n>>m;
 if(n<m){
  c+=m+(n-1);
 }
 else
 c+=n+(m-1); 
 cout<<c<<"\n";
 for(i=1;i<=m;i++)
   cout<<"1"<<" "<<i<<"\n";
 for(i=2;i<=n;i++)
 cout<<i<<" "<<m<<"\n";
 return 0;
} 
  
  