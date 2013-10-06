#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool compare(pair<long long, long long> a, pair<long long, long long> b){
    if(a.first==b.first)
      return a.second>b.second;
    return a.first<b.first;
 }
int main()
{
  vector<pair<long long,long long> > range;
  int n,total=0,i,j;
  cin>>n;
  for(i=0;i<n;i++)
  {
   long long a,b;
   cin>>a>>b;
   range.push_back(make_pair(a,b));
  }
  sort(range.begin(),range.end(),compare);
  for(i=0;i<n;i++)
   cout<<range[i].first<<" "<<range[i].second<<"\n";
  i=0;
  for(j=1;j<n;j++)
  {
    if(range[j].first>range[i].first && range[j].second<range[i].second)
    {
	 cout<<range[i].first<<" "<<range[j].first;
	 total++;
    }
	else i=j;     
   }  
   cout<<total;
  return 0;
}  