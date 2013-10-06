#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
  int arr[100000];
  int i,j,a,n,pos,c=0;
  memset(arr,0,sizeof(int)*(n+5));
  cin>>n;
  for(i=0;i<n;i++)
  {
   cin>>a;
   cout<<"first"<<a;
   pos=a;
   if(arr[a]==0)
     arr[a]=1;
	else {
     arr[a]=0;
     for(j=a+1;arr[j]!=0;j++)
        arr[j]=0;
     arr[j]=1;
	 pos=j;
    }
	cout<<"a \n";
  }	
  pos=max(a,pos);
  for(i=0;i<=ps;i++)
  {
    if(arr[i]==0)
         c++;
  }
  cout<<"\n"<<c;
 return 0;
} 