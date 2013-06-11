#include<iostream>
#include<set>
using namespace std;
int main()
{
  set<int> list;
  set<int>::iterator it;
  int n,a,b,i,count=0;
  cin>>n;
  for(i=0;i<n;i++)
  {
    int a;
	cin>>a;
	list.insert(a);
  }	
  cin>>a>>b;
  for(it=list.find(a);it!=list.find(b);++it)
   count++;
  cout<<count;
  return 0;
}  
  