#include<iostream>
#include<utility>
#include<cstring>
#include<vector>
#include<queue>
using namespace std;
int main()
{
 vector<pair<long,long> > nodes; 
 int edge[100][100];
 int ct[100];
 int n,i,j;
 cin>>n;
 memset(edge,0,(n+1)*(n+1)*sizeof(int));
 memset(ct,0,(n+1)*sizeof(int));
 for(i=0;i<n;i++)
 {
   int s=nodes.size();
   int a,b,c;
   cin>>a>>b>>c;
   switch(a)
   {
   case 1:
   nodes.push_back(make_pair(b,c));
   for(j=0;j<=s;j++)
   {
    int x= nodes[j].first;
	int y=nodes[j].second;
    if((b<x && x<c) || (b<y && y<c))	 
	{ 
	edge[j+1][++ct[j+1]]=s+1;
    //cout<<j+1<<"to "<<s+1<<"\n";    
	}
	if((x<b && b<y) || (x<c && c<y))
	{ edge[s+1][++ct[s+1]]=j+1; 
      //cout<<s+1<<"to "<<j+1<<"\n";
    }	  
   }	  
   break;
   case 2:
   queue<int> path;
   path.push(b);
   int m;
   for(m=path.front();m!=c && !path.empty();)
   {
      for(j=1;j<=ct[m] && edge[m][j]!=c;j++)
	  {
	    path.push(edge[m][j]);	   
      }
	  path.pop();
	  if(edge[m][j]==c)
	  m=c;
	  else if(!path.empty())
	   m=path.front();
   }	   
   if(m==c)
   cout<<"YES \n";
   else
   cout<<"NO \n";
   break;
   }
  } 
 return 0;
} 