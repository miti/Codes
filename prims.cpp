#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
long long dist(int x1,int x2,int y1,int y2)
{
  return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
} 
int main()
{
 int min_d,pos,i,j,total;
 int X[100],Y[100],city,village,parent[100];
 bool isCity[100];
 long long tym[100][100],result;
 unsigned long long distance[50];
 cin>>city>>village;
 total=city+village;
 for(i=0;i<total;i++)
 {
   cin>>X[i]>>Y[i];
   if(i<village)
   {
   isCity[i]=false;   
   }
   else {
   cout<<"city "<<i<<"\n";
   isCity[i]=true;   
   }
 }  
 memset(distance,1,sizeof(long long)*total); 
 for(i=0;i<village;i++)
 {
   tym[i][i]=0;
   for(j=i+1;j<total;j++)
   {
   tym[i][j]=dist(X[i],X[j],Y[i],Y[j]);
   tym[j][i]=tym[i][j];
   if(isCity[j] && distance[i]>tym[i][j])
    {
	 distance[i]=tym[i][j];
	 parent[i]=j;
	}
   }   
 }
 for(i=0;i<village;i++)
 {
   min_d=1000000;
   pos=-1;
   for(j=0;j<village;j++)
   { 
     cout<<distance[j]<<" distance\n";
     if(!isCity[j] && distance[j]<min_d)
     {
      min_d=distance[j];
      pos=j;
     }
   }  
   cout<<"position"<<pos<<"\n";
   for(j=0;pos>=0 && j<total;j++)
    {
       cout<<pos<<" "<<j<<" "<<tym[pos][j]<<"\n";
       if(j!=pos &&!isCity[j] && tym[pos][j]<distance[j])
       {            
		    distance[j]=tym[pos][j];
            parent[j]=pos;
       }
    }
    if(pos>=0)
        {
        isCity[pos]=true;
    cout<<i<<" "<<distance[pos]<<"\n";
        }
  }
  for(i=0;i<village;i++)
  {
   cout<<parent[i]<<" "<<tym[parent[i]][i]<<" summing\n";
   result+=tym[parent[i]][i];  
  }cout<<result; 
return 0;
} 