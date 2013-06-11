#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
    return (a.second/a.first)>(b.second/b.first);
  }
int main()
{
  vector<pair<int,int> > items;
  int i,n,value=0,weight=0,w;
  cin>>w;
  cin>>n;
  for(i=0;i<n;i++)
  {
    pair<int,int>p; 
    cin>>p.first>>p.second;
    items.push_back(p);
  }
  sort(items.begin(),items.end(),compare);
  for(i=0;i<n;i++)
  {
    cout<<items.at(i).first<<"\t"<<items.at(i).second<<"\n";    
  }
  for(i=0;weight<w&&i<items.size();i++)
  {
    if(weight+items[i].first<=w)
    {
        weight+=items[i].first;
        value+= items[i].second;
        }
        else
        {
        value+= ((w-weight)* items[i].second)/items[i].first ;
        weight=w;
        
        }
  }
  /*for(i=0;i<n;i++)
  {
    cout<<items.at(i).first<<"\t"<<items.at(i).second<<"\n";    
  }*/
  cout<<"weight "<<weight<<"\t"<<value;
  return 0;
} 