#include<stdio.h>
#include<cstring>
#define LIMIT 10000
using namespace std;
int edge[LIMIT][1000],v[LIMIT],visited[LIMIT],tym[LIMIT][1000];
unsigned long long distance[LIMIT]; 
int main()
{
 int n,m,s,e,min_d,pos,next,i,j,t,tc;
 scanf("%d",&tc);
 for(int k=0;k<tc;k++)
 {
 scanf("%d%d%d%d",&n,&m,&s,&e);
 memset(visited,0,sizeof(int)*n);
 memset(v,0,sizeof(int)*n);
 memset(distance,1,sizeof(long long)*n);
 for(i=0;i<m;i++)
 {
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  t=v[a-1]++;
  edge[a-1][t]=b-1;
  tym[a-1][t]=c;
  t=v[b-1]++;
  edge[b-1][t]=a-1;
  tym[b-1][t]=c;
 }
 distance[s-1]=0; 
 for(i=0;visited[e-1]==0 && i<n;i++)
 {
   min_d=1000000;
   pos=-1;
   for(j=0;j<n;j++)
   { 
   //  cout<<distance[j]<<" distance\n";
     if(visited[j]==0 && distance[j]<min_d)
     {
      min_d=distance[j];
      pos=j;
     }
   }  
  // cout<<"position"<<pos<<"\n";
    for(j=0;pos>=0 && j<v[pos];j++)
    {
          next=edge[pos][j];
          //cout<<pos<<" "<<j<<" "<<next<<" "<<tym[pos][j]<<"\n";
          if(distance[pos]+tym[pos][j]<distance[next])
          {
           distance[next]=distance[pos]+tym[pos][j];
          }
    }
    if(pos>=0)
    {visited[pos]=1;
  //  cout<<i<<" "<<distance[pos]<<"\n";}
  }
  }
  if(visited[e-1]==1)
  printf("%d \n",distance[e-1]);
  else 
  printf("NONE\n");
 } 
return 0;
} 