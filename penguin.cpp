#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int i,used[50],n,combi=0;
 string a;
 cin>>a;
 n=a.length();
 memset(used,0,sizeof(int)*n);
 i=1;
 while(a.length()>1 && i==1)
 {   
  if(a[0]==a[1])
  {
  combi++;
  a=a.substr(2);
  i=1;
  }
  else if(a[0]==a[a.size()-1])
  {
  combi++;
  a=a.substr(1,a.size()-2);
  i=1;
  } 
  else {
    for(int j=1;j<a.size()-1;)
    {
        if(a[j]==a[j+1])
          {
           combi++;
           a=a.substr(0,j)+a.substr(j+2);
           i=1;
           j=0;
         }    
          else {j++;i=0;}
    cout<<"j "<<j<<"\n";      
        }
 }
 cout<<combi<<"\n";
 }
 if(a.size()>1)
  combi+=(a.size()-2)/2; 
cout<<combi;
return 0;
} 