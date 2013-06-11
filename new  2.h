#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;
int main()
{
  vector<pair<int,int> > node;
  int edge[50][50];
  int vertex[50];
  int visited[50];
  queue<int> traversal;
  int x,y,i,j,k,h,f;
  cin>>h>>f>>k;  
  for(i=0;i<=f;i++)
   for(j=0;j<=h;j++)
    node.push_back(make_pair(i,j));
  for(i=0;i<=(h+1)*(f+1);i++)
  {
   vertex[i]=0;
   visited[i]=0;
   for(j=1;j<=50;j++)
   edge[i][j]=0;
  }
  for(x=0;x<=f;x++)
    {
         for(y=0;y<=h;y++)
         {
           if(x*50+y*100<=k)
           {
            edge[0][j++]=x*h+y+1;
            vertex[i]++;
           }
         }		   
    }    
  
  for(i=1;i<=h*f;i++)
  { 
   j=1;
   x=node.at(i).first;
   y=node.at(i).second;
   if(x!=0)
	{
	   edge[x*h+y+1][j++]=(x-1)*h+y+1;
	  v[x*h+y+1]++;
	}
	else
	{
	 edge[x*h+y+1][j++]=x*h+y;
	 v[x*h+y+1]++;   
    }	    
  }   
  
  traversal.push(0);
  i=0;
  while(!traversal.empty() || (node.at(i).first==f && node.at(i).second==h))
  {
    for(j=1;j<=vertex[i];j++)
        {
          int temp=edge[i][j];
         // traversal.push(temp);         
          x=node.at(temp).first;
      y=node.at(temp).second;
      if(x!=0)    
       x=x-1;
          else if(k>=y && y>0)
       y=y-1;
          else break;
      traversal.push(x*h+y+1);
          visited[x*h+y+1]=visited[0]+2;
    } 
    traversal.pop();
    i=traversal.front();        
  }     
  visited[0]=visited[f*h+h+1];
  cout<<visited[0];
  return 0;
 } 