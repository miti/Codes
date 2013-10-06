void insert(int x,node* root)
{
 node *n,p,g;
 n=root;
 p=null;
 g=null;
 bool isLeft;
 while(n!=null)
 {
  if(n->data>k)
  {
   g=p;
   p=n;
   n=n->left;
   isLeft=true;
  }
  else{
  g=p;
  p=n;
  n=n->right;
  isLeft=false;
 } 
 }
 n=new node(x);
 n->color='R';
 if(isLeft)
  p->left=n;
 else
  p->right=n;
 while(n!=root && p->color=='R'){ 
 if((g->left==p && g->right->color=='R') ||(g->right==p && g->left->color=='R'))
 { 
   recolor(g->left,'B');
   recolor(g->right,'B');
   recolor(g,'R');
   n=g;
   p=parent(n);
   g=parent(p);
 }
 if((g->left==p && g->right->color=='B'))
 {
   if(!isLeft)
    left_rotate(p);
   right_rotate(g); 
 }
 else if(g->right==p && g->left->color=='B')
 {
  if(isLeft)
    right_rotate(p);
  left_rotate(g);
 }
 }
 root->color='B';
 }