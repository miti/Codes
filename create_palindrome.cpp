#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isPalindrome (string a) {
    int i1 = 0;
    int i2 = a.length() - 1;
    while (i2 > i1)
        if (a[i1++] != a[i2--])
            return false;
    return true;
}
int main()
{
  int c=0;
  string s;
  stack<char> diff;
  cin>>s;
  while(!isPalindrome(s))
  {
    diff.push(s[0]);
	s=s.substr(1);
  }
  while(!diff.empty())
  {
    diff.pop();
	c++;
  }
  cout<<c;
  return 0;
}  