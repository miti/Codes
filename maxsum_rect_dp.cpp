#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int arr[10][10],sum[10][10];
 int m,n,mini,k,l,i,j,temp;
 cin>>m>>n;
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   sum[i][j]=0;
  mini=-9999; 
  for(i=0;i<m;i++)
  { 
    sum[i][0]=0;
    for(j=0;j<n;j++)
    { 
     cin>>arr[i][j];
         for(k=i;k>=0;k--)
           for(l=j;l>=0;l--)
            sum[i][j]+=arr[k][l];
         mini=max(mini,sum[i][j]);      
        }
  }
  for(i=0;i<m;i++)
  {
    cout<<"\n";
   for(j=0;j<n;j++)
    cout<<sum[i][j]<<"\t";
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
        {
          for(k=i;k<m;k++)
          {
           for(l=j;l<n;l++)
           {
             if(i==0&& j!=0)
          temp= sum[k][l]-sum[k][j-1];
         else if(j==0 && i!=0)
          temp= sum[k][l]-sum[i-1][l];
         else if(i>0 && j>0)    
          temp= sum[k][l]-sum[k][j-1]-sum[i-1][l]+sum[i-1][j-1];
         // cout<<"temp i"<<i<<"\t j"<<j<<"\t"<<"k \t"<<k<<"l \t"<<l<<"\t"<<temp<<"\n";
                  mini= max(mini,temp);
       }
      }
    }
   }    
 cout<<mini;
 return 0;
}