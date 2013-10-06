#include<iostream>
using namespace std;
string s;
int n;
string shift(int p,string t)
{
 int temp=t[p];
 for(int i=p;i<n;i++)
  t[i]=t[i+1];
 t[n]=temp; 
 return t;
}
void anagram(int p,string t)
{
 if(p==n-1)
  {
  cout<<shift(p,t);
  return;
  }
 if(p>=n)
  return;
 else{
  for(int i=p;i<n;i++)
  {
    string a= shift(i,t);
    cout<<a<<"\n";
    t=a;
    for(int k=n-1;p<k;k--)
     anagram(k,a);
  }	
  anagram(p-1,t);
}
int main()
{
 cin>>s;
 n=s.length()-1;
 cout<<s<<"\n";
 cout<<shift(n-1,s)<<"\n";
 anagram(n-2,s);
 return 0; 
} 
     