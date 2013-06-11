#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> mergeSort(vector<int> a,vector<int> b)
{
  vector<int> d;
  int i,j;
  int asize=a.size();
  int bsize=b.size();
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
 return d;      
}
int main()
{
 vector<int> a,b,c,result;
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
 for(i=0;i<10;i++)
 {
  int t;
  cin>>t;
  c.push_back(t);
 }
 sort(a.begin(),a.end());
 sort(b.begin(),b.end());
 sort(c.begin(),c.end());
 //cout<<"\n Sorted all 3";
 result= mergeSort(a,b);
 //cout<<"\n merge sort 1";
 /*for(i=0;i<30;i++)
  cout<<"\n First "<<result[i];
 */
 result = mergeSort(result,c);
 for(i=0;i<30;i++)
  cout<<result[i]<<"\n";
 return 0;
}