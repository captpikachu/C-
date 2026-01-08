#include<bits/stdc++.h>
using namespace std;
int height = 0;
class TreeNode{
    public:
TreeNode* left;
int data;
TreeNode* right;
TreeNode(){
    data = 0;
    left = right = NULL;
}
TreeNode(int n){
data = n;
left = NULL;
right = NULL;
}
};
void preOrder(TreeNode* root){
    
if(root==NULL)
return;

preOrder(root->left);

preOrder(root->right);
cout<<root->data<<endl;


}
int main()
{
// TreeNode root = TreeNode(1);
// TreeNode l =TreeNode(2);
// TreeNode r = TreeNode(3);
// root.left = &l;
// root.right = &r;
// TreeNode ll=TreeNode(4);
// TreeNode lr=TreeNode(5);
// TreeNode rl=TreeNode(6);
// TreeNode rr=TreeNode(7);
// TreeNode llr  = TreeNode (8);
// TreeNode lrl = TreeNode (9);
// TreeNode rll = TreeNode (10);
// TreeNode rlr = TreeNode (11);
// TreeNode rrl = TreeNode (12);
// TreeNode rrr = TreeNode (13);
// l.left = &ll;
// l.right=&lr;
// r.left = &rl;
// r.right = &rr;
// ll.right = &llr;
// lr.left = &lrl;
// rl.left=&rll;
// rl.right = &rlr;
// rr.left = &rrl;
// rr.right=&rrr;

TreeNode root = TreeNode(1);
TreeNode l =TreeNode(7);
TreeNode r = TreeNode(9);
root.left = &l;
root.right = &r;
TreeNode ll=TreeNode(2);
TreeNode lr=TreeNode(6);
// TreeNode rl=TreeNode(6);
TreeNode rr=TreeNode(9);
// TreeNode llr  = TreeNode (8);
TreeNode lrl = TreeNode (5);
TreeNode lrr = TreeNode(11);
// TreeNode rll = TreeNode (10);
// TreeNode rlr = TreeNode (11);
TreeNode rrl = TreeNode (5);
// TreeNode rrr = TreeNode (13);
l.left = &ll;
l.right=&lr;
// r.left = &rl;
r.right = &rr;
// ll.right = &llr;
lr.left = &lrl;
lr.right = &lrr;
// rl.left=&rll;
// rl.right = &rlr;
rr.left = &rrl;
// rr.right=&rrr;
preOrder(&root);
// cout<<height;
return 0;
}
