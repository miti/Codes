#include<iostream>
#include<stack>
using namespace std;
stack<int> node;
int main()
{
  int tree[50];
  int i,n,temp,size;
  cin>>size;
  cin>>n;
  //insertion
  for(i=0;i<size;i++)
    cin>>tree[i];
  i=0;
  while(tree[i]!=n && i<size)
  {
    cout<<i<<"\t";
    node.push(i);
    if(2*i+1 <size && tree[2*i+1]!=-1)
        { 
          i=2*i+1;
          continue;
        }  
        if(2*i+2 <size && tree[2*i+2]!=-1)
        { 
          i=2*i+2;
          continue;
        }  
        node.pop();
		if(!node.empty())
        {       
          temp = node.top();
		  if(i==2*temp+2)
		   node.pop();
          if(!node.empty() && 2*temp+2 <size && tree[2*temp+2]!=-1)
            {
             i= 2*temp+2;
             continue;
            }
        }
    break;
  }
  if(tree[i]==n)
  {
    cout<<node.top();
    node.pop();
  }
  return 0;
}  