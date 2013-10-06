#include<iostream>
using namespace std;
int main()
{
 int neg[100005],pos[100005],zero=0,n,ch;
 cin>>n;
 neg[0]=0;
 pos[0]=0;
 for(int i=1;i<=n;i++)
 {
   long long x;
   cin>>x;
   if(x==0)
     zero++;
   else if(x<0)
    {
      neg[i]=neg[i-1]+1;
      pos[i]=pos[i-1];
    }
   else{
     pos[i]=pos[i-1]+1;
     neg[i]=neg[i-1];
    }
  }
  ch=n;
  for(int i=1;i<=n;i++)
  {
    if(ch>(pos[i]+neg[n]-neg[i])+zero)
    ch=(pos[i]+neg[n]-neg[i])+zero;
  }
  cout<<ch;
 return 0;
} 