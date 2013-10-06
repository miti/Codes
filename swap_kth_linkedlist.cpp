void swap(node* root,int k)
{
int i,j;
node* kth,ps,cs,next;
ps=root;
cs=root;
next=cs;
for(i=1;i<k && next->next!=null;i++)
  next=next->next;
kth=next;  
if(next==null)
 cout<<"not enuf elements";
else{ 
  while(next!=null)
  {
    cs=next->next;
    next=cs;
    for(i=1;i<k && next->next!=null;i++)
         next=next->next;
        if(i==k)
        { 
        ps=cs;
        i=0;
        }
  }
  for(j=1;j<=i;j++)
   ps=ps->next;
  j=kth->val;
  kth->val=ps->val;
  ps->val=j;
  cout<<"swapped";
 }
} 