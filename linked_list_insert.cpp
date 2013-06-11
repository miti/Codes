void insert(node*p,int x)
{
  node * temp, *prev;
  prev=p;
  temp = prev->next;
  node *n;
  n->value=x;
  if(temp==prev)
  {
    n->next=prev;
	prev->next=n;
  }
  else 
  {  
  if(temp->value< prev->value && ){
  while(temp!=p)
  {
    if(temp->value>x)  
	break;	
	prev=temp;
	temp= temp->next;
  }  
  }
  else{
  while(temp!=p)
  {
    if(temp->value<x)  
	break;	
	prev=temp;
	temp= temp->next;
  }  
  }  
  n->next= temp;
  prev->next = n;  
 }
} 