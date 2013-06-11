#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int table[5001][5001],i,j;
  string s,rev;
  cin>>s;
  rev="";
  int n= s.length();
  for(i=0;i<n;i++)
    rev[i]=s[n-1-i];
 // rev[i]='\0';
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=n;j++)
    {
     if(i==0 || j==0)
      table[i][j]=0;
         else if(s[i-1]==rev[j-1])
      table[i][j]=table[i-1][j-1]+1;
     else
      table[i][j]=max(table[i-1][j],table[i][j-1]);
    }
   }
   cout<<n-table[n][n];   
   return 0;
}   