#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 string s;
 int i,t,n,j;
 char c;
 cin>>n;
 cin>>s;
 cin>>t;
 for(i=0;i<t/2;i++)
 {
   c=s.at(i);
   s[i]=s[t-1-i];
   s[t-1-i]=c;
 }
 j=t+(n-t)/2;
 for(i=t;i<j;i++)
 {
   c=s.at(i);
   s[i]=s[n-1-i+t];
   s[n-1-i+t]=c;
  }
 cout<<s<<"\n";
 for(i=0;i<n/2;i++)
 {
  c=s.at(i);
  s[i]=s[n-1-i];
  s[n-1-i]=c;
  }
 cout<<s;
 return 0;
}