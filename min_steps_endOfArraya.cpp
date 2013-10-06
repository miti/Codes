#include<iostream>
using namespace std;
int main()
{
 int arr[20];
 int n,i,j,m=0,pos,flag=0,max_step;
 cin>>n;
 for(i=0;i<n;i++)
  cin>>arr[i];
 pos=0;
 while(pos<n-1)
 {
   max_step=0;
   for(j=0;j<=arr[pos];j++)
   {
     if(j>=n-1-pos)
     {
       pos=n-1;
       m++;
       flag=1;
       break;
     }
     else if(arr[pos+j]>max_step)
            max_step=j;
    }
    if(flag==0)
    {
     pos=pos+max_step;
     m++;
    }
  }
 cout<<m;
 return 0;
}