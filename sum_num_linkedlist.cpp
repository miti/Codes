int length(node* root)
{
 node *n=null;
 int l=0;
 if(root!=null)
  l=1;
 for(n=root;n!=null;n=n->next;l++);
 return l;
}
int add(node*a,node*b,int d)
{
  if(d==0)
    return a->data+b->data;
  int sum=add(a->next,b->next,d-1);
  int p= pow(10,d);
  int last=sum%p;
  return(sum/p+a->data+b->data)*p+last;
}
final_sum(node *n1,node* n2)
{
   int l1=length(n1);
   int l2=length(l2);
   int diff=fabs(l1-l2);
   if(l1>l2)
   {    
	node* temp=n2;
    for(int i=1;i<=diff;i++)
	{
	  node*n=null;
      n->data=0;
      n->next=temp;
      temp=n;
    }	 
    add(n1,temp,l1-1);
    }	
	else if(l2>l1)
   {    
	node* temp=n1;
    for(int i=1;i<=diff;i++)
	{
	  node*n=null;
      n->data=0;
      n->next=temp;
      temp=n;
    }	 
    add(n2,temp,l2-1);
    }	
	else add(n1,n2,l1-1);
}	
    	
	