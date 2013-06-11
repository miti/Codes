#include<iostream>
#include<vector>
using namespace std;
vector<int> a,d;
void merge(int lfirst,int llast,int rfirst,int rlast)
{
  int i,j;
 for(i=lfirst,j=rfirst;i<=llast&&j<=rlast;)
 {
   if(a[i]<a[j])
     d.push_back(a[i++]);
   else
     d.push_back(a[j++]);
 }
  for(;i<=llast;)
    d.push_back(a[i++]);
  for(;j<=rlast;)
    d.push_back(a[j++]);
  for(i=lfirst;i<rlast;i++)
    cout<<d[i]<<"\n"; 
} 
void sort(int f, int l)
{
  int mid;
  if(f<l)
  {
   mid=(f+l)/2;
   sort(f,mid);
   sort(mid+1,l);
   merge(f,mid,mid+1,l);  
   }
}
int main()
{
int i,j;
 int asize;
 for(i=0;i<10;i++)
 {
  int t;
  cin>>t;
  a.push_back(t);
 }
 asize= a.size(); 
 sort(0,asize-1); 
return 0;
}