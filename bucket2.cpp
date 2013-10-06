#include<iostream>
#include<algorithm>
#include<cstring>
static int bucket[50];
using namespace std;
int main()
{
 int i,j,n,candy[50];
 cin>>n; 
 //memset(bucket,1,sizeof(int)*(n+1));
 for(int i=1;i<=n;i++)
  cin>>candy[i];
 bucket[0]=1;
 for(i=2;i<=n;i++)
 {
   for(j=i-1;j>=0;j--)
   {
    if(candy[i]>=candy[j] && bucket[i]<bucket[j]+1)
     bucket[i]=bucket[j]+1;
   }
 }    
 cout<<bucket[n]; 
 cout<<"\npath\n";
 return 0;
} 