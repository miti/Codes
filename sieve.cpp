#include<iostream>
#include<cmath>
#include<cstring>
#define LIMIT 100
using namespace std;
int main()
{
  int limit =(int)sqrt(LIMIT),i,j;
  bool isComp[LIMIT];
  memset(isComp,false,sizeof(isComp));
  //isComp[2]=false;
  for(i=4;i<LIMIT;i=i+2)
   isComp[i]=true;
  for(i=3;i<limit;i=i+2)
  {
    if(!isComp[i])
	{
	  for(j=3;i*j<LIMIT;j=j+2)
	   isComp[i*j]=true;
	}
  }
  for(i=1;i<LIMIT;i++)
  {
  if(!isComp[i])
    cout<<"\n"<<i;
   }	
  return 0;
}