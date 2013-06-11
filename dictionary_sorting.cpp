#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<cctype>
using namespace std;
bool compare(string a, string b){
    int i=0,j;
    while(i<a.length() && j<b.length() && a.at(i)==b.at(j))
	{
	i++;
	j++;
	}
	if(i!=a.length() && j!=b.length())
	{
	  char x = a.at(i);
	  char y = b.at(j);
	  if(x+32!=y && isupper(x) && islower(y))
	    y=y-32;
	  else if(y+32!=x && isupper(y) && islower(x))
	    x=x-32;
	  return x<y;	   
    }	  
	else if(i==a.length() &&j<b.length())
      return true;
    else
      return false;	
	
  }
int main()
{
  vector<string> items;
  int i,n,value=0,weight=0;  
  cin>>n;
  for(i=0;i<n;i++)
  {
    string p;
    cin>>p;
    items.push_back(p);
  }
  sort(items.begin(),items.end(),compare);
  for(i=0;i<n;i++)
  {
    cout<<items.at(i)<<"\n";    
  }
  return 0;
} 