#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s;
 int i,j;
 cin>>s;
 int l=s.length();
 i=0;
 while(i<l)
 { 
   int o;
   for(o=0;i<l && s[i]=='1';i++,o++);
   for(int c=0;o>0 && c<2 && i<l && s[i]=='4';i++,c++);
   if(s[i]!='1')
    break;
 } 
 if(i==l)
 cout<<"\n YES";
 else
 cout<<"\n NO";
 return 0;
 }