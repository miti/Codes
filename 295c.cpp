#include<iostream>
#include<vector>
#include<utility>
#include<queue>
#include<cstring>
using namespace std;
int main()
{
  vector<pair<int,int> > node;
  int edge[50][50];
  int vertex[50];
  int visited[50];
  queue<int> traversal;
  int x,y,i,j,k,h,f,a,b;
 // cout<<"declared\n";
  cin>>h;
  cin>>f;
  cin>>k;  
 // cout<<"entered\n";
  for(i=0;i<=f;i++)
  {
  for(j=0;j<=h;j++)
  {
    pair <int,int> p;
    p = make_pair(i,j); 
    node.push_back(p);
  }
  }
 // cout<<"nodes\n";      
  memset(vertex,0,sizeof(int)*(h+1)*(f+1));
  memset(visited,0,sizeof(int)*(h+1)*(f+1));  
 // cout<<"Set \n";
  for(i=0;i<(h+1)*(f+1);i++)
  {
    for(j=1;j<(h+1)*(f+1);j++)
   edge[i][j]=0;
  }
 // cout<<"edge set\n";
  for(i=0;i<(h+1)*(f+1);i++)
  { 
   j=1;
   x=node.at(i).first;
   y=node.at(i).second;
    for(a=f-x;a>=0;a--)
    {
         for(b=h-y;b>=0;b--)
         {
           if(a*50+b*100<=k)
           {
            edge[i][j++]=(x+a)*(h+1)+y+b;
            vertex[i]++;
           }
        /*   if(x!=0)
           {
           edge[x*(h+1)+y][j++]=(x-1)*h+y+1;
           v[x*(h+1)+y]++;
           }
           else
           edge[x*(h+1)+y][j++]=x*h+y;
           v[x*(h+1)+y]++;
*/       }
    }    
  }   
/*  cout<<"--------Edeg......\n";
  for(i=0;i<(h+1)*(f+1);i++)
  {
  for(j=0;j<(h+1)*(f+1);j++)
    cout<<edge[i][j]<<"\n";
	cout<<"\n";
  }*/
  traversal.push(0);
  i=0;
  visited[f*(h+1)+h]=-1;
  while(!traversal.empty() && i<(h+1)*(f+1))
  {
    for(j=1;j<=vertex[i];j++)
        {
		 // cout<<"for\n";
          int temp=edge[i][j];           
          if(temp!=i)
		  {
		    x=node.at(temp).first;
            y=node.at(temp).second;	
            if(x==f && y==h)
            {
			  visited[temp]=visited[i]+1;
			  i=f*(h+1)+h;
			  break;
            } 			
            if(x!=0)    
             x=x-1;
            else if(y<=h && y>0)
             y=y-1;
            else continue;
			if(visited[x*(h+1)+y]==0)
              {
			//  cout<<"pushed x"<<x<<"y"<<y<<"\n";
			  traversal.push(x*(h+1)+y);
			  visited[x*(h+1)+y]=visited[i]+2;
			  }		    
		  //  cout<<"push\n";            
		  }
        }
      //  cout<<"end for\n";	
        traversal.pop();
        if(!traversal.empty())
        i=traversal.front();
        if(traversal.empty() || i==(f*(h+1)+h))
        break;
	   // cout<<"end while\n";  
   }     
  cout<<visited[f*(h+1)+h];
  return 0;
 }