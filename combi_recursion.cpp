#include<iostream>
using namespace std;
int n,k;
int set[50];
void combi(int pos)
{
  if(pos==0|| pos>k)
   return;
  if(set[pos]<n-k+pos)
  {
  cout<<pos<<" its pos \n";
   int t= set[pos];
   for(int i=pos;i<=k;i++)
   set[i]=++t;
   cout<<"\n"; 
   for(int i=1;i<=k;i++)
   cout<<set[i]<<"\b\b";
   combi(k);
  }  
  combi(pos-1);
}
int main()
{
  cin>>n>>k;
  for(int i=1;i<=k;i++)
  { set[i]=i;
    cout<<set[i]<<"\b\b";
  }combi(k);
  return 0;
}  