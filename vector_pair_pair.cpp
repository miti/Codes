#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool compare(pair<int,pair<long long,long long> > a, pair<int,pair<long long,long long> > b){
    if(a.second.second==b.second.second)
	 return (a.second.first>b.second.first);
	return (a.second.second)<(b.second.second); 
  }
int main()
{
  vector<pair<int,pair<long long,long long> > > items;
  long long i,n,p,k;
  cin>>n>>p>>k;
  for(i=0;i<n;i++)
  {
    pair<long long,long long>p; 
    cin>>p.first>>p.second;
	pair<int,pair<long long,long long> > t = make_pair(i+1,p);
    items.push_back(t);
  }
  sort(items.begin(),items.end(),compare);
  for(i=0;i<p;i++)
   cout<<items[i].first<<"\n";
  return 0;
}  
   