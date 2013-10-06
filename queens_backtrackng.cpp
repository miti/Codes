#include<iostream>
using namespace std;
int arr[8][8];
bool check(int r,int c)
{
 cout<<"check r "<<r<<c;   
 for(int j=r;j>=0;j--)
 { 
   if(arr[j][c]==1)
   return false;
 }  
 for(int j=c;j>=0;j--)
 { 
   if(arr[r][j]==1)
   return false;
 }  
 for(int i=r,j=c;i>=0 && j>=0;r--,c--)
 {
   if(arr[i][j]==1)
    return false;
 }
 for(int i=r,j=c;i>=0 && j<8;i--,j++)
 {
  if(arr[i][j]==1)
   return false;
 }
 return true;
} 
bool place_queen(int col)
{
 if(col==8)
  return true;
 for(int i=0;i<8;i++)
 {
     cout<<i<<" "<<col<<"\n";
    if(check(i,col))
    {
     arr[i][col]=1;
     if(place_queen(col+1))
      return true;   
     cout<<col<<"\n"; 
     arr[i][col]=0;
    }    
   } 
   return false;
} 
int main()
{
  place_queen(0);
  for(int i=0;i<8;i++)
  {
    cout<<"\n";
    for(int j=0;j<8;j++)
    cout<<arr[i][j];
  }
  return 0;
} 