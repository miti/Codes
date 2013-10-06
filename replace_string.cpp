#include<iostream>
#include<string>
using namespace std;
int main()
{
 string s;
 int i=0,j=0,l;
 l=s.length();
 while(i<l)
 {
  switch(s[i])
  {
   case 'b': i++;break;
   case 'a':if(i+1<l && s[i+1]=='c')
             i=i+2;
			else s[j++]=s[i++]; 
			break; 
   case 'c':if(j>0 && s[j-1]=='a')
              j--;
			else s[j++]=s[i++];  
   default:	s[j++]=s[i++];
  }
 }
 cout<<s;
 return 0;
} 