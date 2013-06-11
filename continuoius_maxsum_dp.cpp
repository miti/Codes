#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int level[10];
 int i,j,n,t,start,end,sum,maxsum;
 cin>>n>>t;
 for(i=0;i<n;i++)
  cin>>level[i];
  maxsum=-1;
  start=0;
  end=0;
 for(i=0;i<n;i++)
 {
   sum=(level[i]-t);
   for(j=i+1;j<n;j++)
    {
	  sum+=level[j]-t;
	  if(sum>maxsum)
     {       
	   maxsum=sum;
       start=i;
	   end=j;
     }	   
    }
  }
 /* for(i=start;i<=end;i++)
  {
    if(level[i]<t)
      maxsum=maxsum-(t-level[i]);
  }*/
  cout<<start<<"\t"<<end<<"\n";
  cout<<maxsum;
  return 0;
}  
	