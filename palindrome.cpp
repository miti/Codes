#include<iostream>
using namespace std;

int main()
{
 string s;
 int i,count=0;
 cin>>s;
 int n= s.length();
 for(i=0;i<=n/2;i++)
 {
  if(s[i]!=s[n-1-i])
    count+=2;
 }
 cout<<count; 
 return 0;
} 