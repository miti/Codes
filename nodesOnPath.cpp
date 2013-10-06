int sum(node* root, int s,int k)
{
 if(root==null)
  return s;
 else
 {
  int lsum=sum(root->left, root->data+s,k);
  int rsum=sum(root->right,root->data+s,k);
  if(lsum<k && rsum<k)
  {
   delete(root);
   return k-1;
  }
  return k+1;
 }
} 

int sum(int index,int limit)
{
  if(index>limit)
    return 0;
  else
  { 
   s[index]=max(a[index]+sum(index+2,limit),sum(index+1,limit));
  }
  return s[index];
}  
   