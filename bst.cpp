#include<iostream>
#include<stack>
using namespace std;
int arr[100],index=0;
void insert(int n)
{
 int i;
 for(i=0;arr[i]!=0;)
 {
  if(arr[i]<n)
   i=2*i+2;
  if(arr[i]>n)
   i=2*i+1;
  if(arr[i]==n)
   break;
 }
  arr[i]=n;   
}
void remove(int n){
 int i;
 for(i=0;arr[i]!=n && i<9;)
 {
   for(;arr[i]>n && i<9;i=i*2+1);
   for(;arr[i]<n && i<9;i=i*2+2);
 }
 cout<<i<<" index\n";
 if(arr[i]==n)
 {
   int c1=2*i+1;
   int c2=c1+1;
   if(arr[c1]!=0 && arr[c2]!=0)
   {
     int k=c2;
     while(arr[k*2+1]!=0)
      k=2*k+1;
     arr[i]=arr[k];
     arr[k]=0;
   }
   else if(arr[c1]!=0)
   {
    int k=i;
    stack<int> in;
        in.push(c1);
        while(!in.empty())
        {
          int m= in.top();
          arr[k+m-c1]=arr[m];
          in.pop();
          if(arr[m*2+1]!=0)
          in.push(m*2+1);
          if(arr[m*2+2]!=0)
          in.push(m*2+2);
        }
   }
   else if(arr[c2]!=0)
   {
   int k=i;
    stack<int> in;
        in.push(c2);
        while(!in.empty())
        {
          int m= in.top();
          arr[k+m-c2]=arr[m];
          in.pop();
          if(arr[m*2+1]!=0)
          in.push(m*2+1);
          if(arr[m*2+2]!=0)
          in.push(m*2+2);
        }
    }
   else arr[i]=0;  
 }  
 
}
int main()
{
 insert(9);
 insert(10);
 insert(7);
 insert(5);
 insert(11);
 insert(8);
 for(int i=0;i<9;i++)
  cout<<arr[i]<<"\n";
 remove(5);
 remove(11);
 remove(9);
 for(int i=0;i<9;i++)
  cout<<arr[i]<<"\n ";
 return 0;
} 