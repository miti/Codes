#include<iostream>
#include<algorithm>
using namespace std;
int n,k,arr[50];
int height(int i)
{
 if(i>=n)
  return 0;
 if(arr[i]==-1)
  return 0;    
 return 1+max(height(2*i+1),height(2*i+2)); 
}
int diameter(int i)
{
 if(i>=n)
  return 0;
 if(arr[i]==-1)
  return 0;
 return max(height(2*i+1)+height(2*i+2)+1,max(diameter(2*i+1),diameter(2*i+2)));  
} 
int main()
{
 int i,j;
 cin>>n,k;
 for(j=0,i=0;i<n;i++)
 {
  cin>>arr[i];  
 }
 cout<<diameter(0);
 return 0; 
} 