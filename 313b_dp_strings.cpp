#include<iostream>
using namespace std;
int main()
{
 string s;
 int hash[50],dot[50],count;
 int i=1,n,a,b,j=0;
 char c;
 dot[0]=0;
 hash[0]=0;
 cin>>s;
 cin>>n;
 while(j<s.length())
 {
   c=s[j];
   if(c=='.')
   {
    dot[i]= dot[i-1]+1;
    hash[i]=hash[i-1];
   }
  else if(c=='#')
  {
    dot[i]=dot[i-1];
    hash[i]=hash[i-1]+1;
  } 
  i++;
  j++;
 }
 for(i=0;i<=s.length();i++)
  cout<<dot[i]<<"\t"<<hash[i]<<"\n";
  cin>>a>>b;
        count=0;
        for(i=a-1;i<b-1;i++)
        {
          if((dot[i+1]-dot[i]==1 && dot[i+2]-dot[i+1]==1) || (hash[i+1]-hash[i]==1 && hash[i+2]-hash[i+1]==1))
           count++;
        }
        cout<<"\n"<<count;
 
 return 0;
} 