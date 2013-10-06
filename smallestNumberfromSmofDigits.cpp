#include<iostream>
#include<cstring>
using namespace std;
int main(){
string s;
int arr[50],l,i,j,t,sum=0,flag=0;
cin>>s;
l=s.length();
for(i=0;i<l;i++)
 arr[i]=s[i]-'0';
sum=arr[l-1];
//cout<<sum<<"\n";
for(i=l-2;i>=0 && flag==0;)
{
  sum+=arr[i];
  if(arr[i]==9 || sum<arr[i]+1)
  {
   i--;
   continue;
  }  
  t=sum-arr[i]-1;
  for(j=l-1;j>=i+1 && t>=0;j--)
    {
     if(t<=9)
      arr[j]=t;
     else
      arr[j]=9;
         t=t-arr[j];
    }
   if(t==0){    
     arr[i]=arr[i]+1;
     flag=1;
        }     
}     
if(flag==0)
 cout<<"not possible";
else {
 for(i=0;i<l;i++)
  cout<<arr[i];
 }
 return 0;
}    