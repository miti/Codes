#include<iostream>
#include<queue>
using namespace std;
int main()
{
  int v[100],e[100][100],visited[100];
  queue<int> list;
  int n,m,s,i,j;
  cin>>n>>m>>s;
  for(i=1;i<=n;i++)
  {
   v[i]=0;
   visited[i]=0;
   for(j=1;j<=n;j++)
   e[i][j]=0;
  }
  for(i=0;i<m;i++)
  {
    int a,b;
    cin>>a>>b;
        v[a]++;
        v[b]++;
        e[a][v[a]]=b;
        e[b][v[b]]=a;
  }
  list.push(s);
  visited[s]=1;
  for(i=s;!list.empty();)
  {
    //cout<<"at level"<<visited[i];
    int level= visited[i];
    for(j=1;j<=v[i];j++)
    {         
       int temp=e[i][j];
       // cout<<"checking"<<temp<<"\t";
       if(visited[temp]==0)
       {
        cout<<e[i][j]<<"\t";
        list.push(temp);
        visited[temp]=visited[i]+1;             
       }
    }     
     list.pop();
     i=list.front();
     if(visited[i]!=level)
      cout<<"\n";
   }     
  return 0;
 } 