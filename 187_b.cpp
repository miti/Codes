#include<iostream>
using namespace std;
int main()
{
  int m,n;
  int a[1000];
  cin>>n>>m;
  int i,j,q,v,x,t;
  for(i=0;i<n;i++)
  {
   	cin>>a[i];    
  }
  for(i=0;i<m;i++)
  {
    cin>>t;
	switch(t)
	{
	 case 1:
	        cin>>v>>x;
			a[v-1]=x;
			break; 
     case 2:
	        cin>>y;
			for(j=0;j<n;j++)
			a[j]+=y;
			break;
	 case 3:
	       cin>>q;
		   cout<<"\n"<<a[q];
	}
  }
  return 0;
}  
    