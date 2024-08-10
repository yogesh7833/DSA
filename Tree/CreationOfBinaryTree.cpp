#include<iostream>
#include<queue>
using namespace std;
class node{
   public:
   int data;
   node* left;
   node* right;
   node(int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;

   }
};
node* buildTree(node* root){
   cout<<"Enter the data :"<<endl;
   int data;
   cin>>data;
   root=new node(data);
   if(data==-1){
    return NULL;
   }

  cout<<"enter data for inserting data in left"<<endl;
  root->left=buildTree(root->left);
  cout<<"Enter the data for inserting in right"<<endl;
  root->right=buildTree(root->right);
  return root;

}
void leveOrder(node* root){
  queue<node*>q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    node* temp=q.front();
    
       q.pop();
      if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
          //matlab queue is not empty
          q.push(NULL);
        }
      }
      else{
        cout<<temp->data<<" ";
           if(temp->left){
              q.push(temp->left);
            }
            if(temp->right){
              q.push(temp->right);
            }
      }
  }
}
void inorder(node* root){
  // base case 
  if(root==NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
void preorder(node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

void postorder(node* root){
  if(root==NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}
int main(){
  node* root=NULL;
  root=buildTree(root);
  //levelorderTraversal
  //1,3,7,-1,-1,11,-1,-1,5,17,-1,-1
  cout<<"printing the level order traversal:";
  leveOrder(root); 

  cout<<"Inorder traversal:";
  inorder(root);
  cout<<endl;
  cout<<"preorder Traversal :";
  preorder(root);
  cout<<endl;
  cout<<"PostOrder Traversal:";
  postorder(root);

  return 0;   
}