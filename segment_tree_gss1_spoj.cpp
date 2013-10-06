#include<iostream>
#include<cmath>
using namespace std;
int arr[50],st[100];
int getSum(int index, int qs, int qe,int ss,int se)
{
    if (qs < 0 || qe > index-1 || qs > qe)
    {
        cout<<"Invalid Input"<<qs<<qe<<ss<<se;
        return -1;
    } 
	
    if (qs <= ss && qe >= se)
        return st[index];    
    if (se < qs || ss > qe)
        return 0; 
    int mid = (ss+se)/2;
    return getSum(2*index+1,qs, qe,ss, mid) +getSum(2*index+2, qs, qe,mid+1, se);
    
}
int create_tree(int s,int e,int i)
{
 if(s==e)
 {
  st[i]=arr[s];
  return st[i];
 }
 int m=(s+e)/2; 
 st[i]=create_tree(s,m,i*2+1)+create_tree(m+1,e,i*2+2);
  cout<<"summing\n";
 return st[i];
} 
int main()
{ 
 int i,j,n,l,r,m;
 cin>>n;
 for(i=0;i<n;i++)
  cin>>arr[i];
 int x = (int)(ceil(log2(n)));
 int max_size = 2*(int)pow(2, x) - 1;   
 st[0]=create_tree(0,n-1,0);
 for(i=0;i<=max_size;i++)
  cout<<st[i]<<"\n";
 cin>>m;
 for(i=0;i<m;i++)
 {
   cin>>l>>r;
  cout<<"sum"<<getSum(0, l-1,r-1,0,max_size)<<"\n";
}
return 0;
}   