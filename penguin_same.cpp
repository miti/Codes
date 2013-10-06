#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 int i,used[50],n,combi=0,j;
 string a;
 cin>>a;
 n=a.length();
 memset(used,0,sizeof(int)*n);
 for(i=0;i<n;)
 {
   if(used[i]==1)
     continue;     
   char c=a[i];
   for(j=i+1;j<n && a[j]==c;j++);   
   if(j<n)
   {
    combi++;
    used[j-1]=1;
    used[j]=1;
	i=j+1;
	cout<<j-1<<" INC "<<j<<"\n";
   }
   else {
   for(j=0;j<n && used[j]==0 && a[j]==c;j++);
   if(used[j]==0 && a[i]!=a[j])
   { combi++;
     cout<<i<<" DEC "<<j<<"\n";
	} 
   break;
   }   
  } 
cout<<combi;
return 0;
} 