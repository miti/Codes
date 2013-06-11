#include<iostream>
#include<cstring>
#include<utility>
#include<vector>
using namespace std;
int main()
{
  string s;
  vector<pair<int,int> > queries;
  int i,j,n,c;
  cin>>s;
  cin>>n;
  for(i=0;i<n;i++)
  {
    int a,b;
	cin>>a>>b;
	queries.push_back(make_pair(a,b));
  }
  for(i=0;i<n;i++)
  {
    int l=queries.at(i).first;
	int r =queries.at(i).second;
	c=0;
	for(j=l-1;j<r-1 && j+1<s.length();j++)
	{
	 if(s.at(j)==s.at(j+1))
	  c++;
	}  
	cout<<c<<"\n";
  }
  return 0;
}  
  