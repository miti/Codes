#include<iostream>
#include<cstring>
#include<algorithm>
using namespace dtd;
int main()
{
  int n,k,i,j,p,m=0;
  cin>>n>>k;
  int arr[50];
  unsigned int d[50][50];
  for(i=0;i<n;i++)
   cin>>arr[i];
  memset(d,1,2500);
  for(i=0;i<n;i++)
  {
   for(j=i;arr[i]!=-1 && j<n;j++)
   {
    if(arr[j]!=-1)
    {
       if(i==j)
       d[i][j]=1;
       else{
        p=j-1;
        if(p%2==0)
         p=p/2;
        else
         p=(p-1)/2;
        if(d[i][p]+1>d[i][j])
        {
		d[i][j]=d[i][p]+1;
        d[j][i]=d[i][j];		
  		}
		}
		m=max(m,d[i][j]);
    }
   }
  }
  cout<<m;
  return 0;
 } 
    
  