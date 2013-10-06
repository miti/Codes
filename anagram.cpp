#include<iostream>
#include<string>
using  namespace std;
string a;
int n;
void permute(int i)
{
 if(i==n)
 {
   cout<<a<<"\n";
  return;
 }
 else{
   for(int j=i;j<=n;j++){
   char c=a[i];
   a[i]=a[j];
   a[j]=c;
   permute(i+1);
   c=a[i];
   a[i]=a[j];
   a[j]=c;
  }
}
}  
int main()
{
 cin>>a;
 n=a.length()-1;
 permute(0);
} 