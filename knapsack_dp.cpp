#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
  int K[101][501];
  vector<pair<int,int> > items;
  int i,n,j,w;
  do
  {
  long val=0,weight;
  cin>>w>>n;
  memset(K,0,sizeof(int)*(n+1)*(w+1));
  for(i=0;i<n;i++)
  {
    pair<int,int>p; 
    cin>>p.first>>p.second;
    items.push_back(p);
  }
  for (i=0;i<=n;i++)
   {
       for (j=0;j<=w;j++)
       {
           if (i==0||j==0)
               K[i][j] = 0;
           else if(items[i-1].first <= j)
                 K[i][j] = max(items[i-1].second + K[i-1][j-items[i-1].first], K[i-1][j]);
           else
                 K[i][j] = K[i-1][j];
          if(val==K[i][j] && j<weight)
           weight=j;
          if(val<K[i][j])
          {
              val=K[i][j];
              weight=j;
          }          
       }
   }
  if(w>0 || n>0) 
  cout<<weight<<" "<<val<<"\n";
  items.clear();
  }
  while(w>0 || n>0);
  return 0;
} 




