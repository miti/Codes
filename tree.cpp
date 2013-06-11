#include<iostream>
using namespace std;
int main()
{
  int tree[50];
  int i,n,temp,size;
  cin>>size;
  cin>>n;
  //insertion
  for(i=0;i<size;i++)
    cin>>tree[i];
  for(i=0;tree[i]!=n && i<size;i++);
  if(tree[i]==n)
  {
   // cout<<i<<"\t"<<i*2+1<<"\t"<<i*2+2<<"\n";
   for(;i>=1;i--)
   {
    cout<<tree[i]<<"\t";
    if(i%2==0)
     i=i/2;
    else
     i=(i+1)/2; 
   }      
  }  
  return 0;
}  