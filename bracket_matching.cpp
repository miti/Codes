#include<iostream>
#include<stack>
using namespace std;
int main()
{
   char a[50];
   char c,temp;
   stack<char> openings;
   cin>>a;
   int i=0;   
   for(;(c= a[i])!='\0';i++)
   {
     if(c=='<'||c=='('||c=='{'||c=='[')
        openings.push(c);
     else if(c=='>'||c==')'||c=='}'||c==']')
          {
            temp = openings.top();
			openings.pop();
            if((temp=='<' && c=='>')||(temp=='(' && c==')')||(temp=='{' && c=='}')||(temp=='[' && c==']'))
              continue;
            else
              break;
           }  
        }
    if(a[i]=='\0')
     cout<<"Balanced";
    else cout<<"Unbalanced";
    return 0;
}        