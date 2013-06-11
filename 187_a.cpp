#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  int ab[1000][2],possible[1000];
  cin>>n;
  int i,c=n,j=0;
  memset(possible,0,n*sizeof(int));
  for(i=0;i<n;i++)
  {
       cin>>ab[i][0]>>ab[i][1]; 
        j= max(j,ab[i][0]);    
    possible[ab[i][0]]++; 
        
  }
  for(i=0;i<n;i++)
  {
    if(possible[ab[i][1]]>0 && ab[i][0]!=ab[i][1])
        {
          c=c-possible[ab[i][1]];
          possible[ab[i][1]]=0;
    }   
  }  
  cout<<c;
  return 0;
}  