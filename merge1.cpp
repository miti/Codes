#include<iostream>
#include<array>
using namespace std;
vector<int> d;
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
void merge(int lfirst,int llast,int rfirst, int rlast)
{
  for(i=0,j=0;i<asize&&j<bsize;)
 {
   if(a[i]<b[j])
     d.push_back(a[i++]);
   else 
     d.push_back(b[j++]);
 }
  for(;i<asize&&j==bsize;)
    d.push_back(a[i++]);
  for(;j<bsize&&i==asize;)
    d.push_back(b[j++]);
}
  
int main()
{
 vector<int> a,b;
 int i;
 for(i=0;i<10;i++)
 {
  int t;
  cin>>t;
  a.push_back(t);
 }
 for(i=0;i<10;i++)
 {
  int t;
  cin>>t;
  b.push_back(t);
 }
 sort(0,a.size()-1);
 sort(0,
 return 0;
}

10 9 8 7 6 5 4 3 2 1
20 19 18 17 16 15 14 13 12 11
30 31 29 28 27 13 12 6 4 2 9