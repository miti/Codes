#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
    if(b.second!=a.second)
     return b.second<a.second;
        else return b.first<a.first; 
  }
int main()
{
  vector<pair<int,int> > cards;
  int i,n,score=0,counter=1;
  cin>>n;
  for(i=0;i<n;i++)
  {
    pair<int,int>p; 
    cin>>p.first>>p.second;
    cards.push_back(p);
  }
  sort(cards.begin(),cards.end(),compare);
  for(i=0;counter>0&&i<cards.size();i++)
  {
    score+= cards[i].first;
	counter+=cards[i]-1;
  }
  /*for(i=0;i<n;i++)
  {
    cout<<cards.at(i).first<<"\t"<<cards.at(i).second<<"\n";    
  }*/
  cout<<score;
  return 0;
} 