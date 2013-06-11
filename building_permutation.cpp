#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  vector<int> a;
  int n,moves=0;
  cin>>n;
  int i;
  for(i=0;i<n;i++)
  {
    int x;
    cin>>x;
      a.push_back(x);
  }
  sort(a.begin(),a.end());
   for(i=0;i<n;i++)
    moves+=abs(i+1-a[i]);
  cout<<moves;
   return 0;
}   