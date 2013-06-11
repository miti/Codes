#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  long state;
  cin>>state;
  if(state<0)
  {
    long temp= state;
	temp = (-1*state)/100*10+state%10;
	temp*=-1;
	state=max(state/10,temp);
	cout<<"temp"<<temp<<"state"<<state;
   }
   cout<<state;
  return 0;
}  
  