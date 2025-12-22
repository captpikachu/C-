#include<bits/stdc++.h>
using namespace std;
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

void morrisInorder(TreeNode* Node){
    if(Node==NULL)
    return;
    TreeNode* temp = Node;
    while(temp!=NULL){
        if(temp->left==NULL)
        {cout<<temp->data<<" ";
        temp = temp->right;}
        else{
            // find inorder predecessor
            TreeNode* pre = temp->left;
            while(pre->right!=NULL && pre->right!=temp)
            pre=pre->right;
            if(pre->right==NULL){pre->right=temp;
            temp =temp->left;}
            else{
                pre->right=NULL;
                cout<<temp->data<<" ";
                temp = temp->right;
            }
        }
    }

}
void morrisPreorder(TreeNode* Node){
    if(Node==NULL)
    return;
    TreeNode* temp = Node;
    while(temp!=NULL){
        if(temp->left==NULL)
        {cout<<temp->data<<" ";
        temp = temp->right;}
        else{
            // find inorder predecessor
            TreeNode* pre = temp->left;
            while(pre->right!=NULL && pre->right!=temp)
            pre=pre->right;
            if(pre->right==NULL){pre->right=temp;
                cout<<temp->data<<" ";
            temp =temp->left;}
            else{
                pre->right=NULL;
                // cout<<temp->data<<" ";
                temp = temp->right;
            }
        }
    }

}
void allTraversal(TreeNode* root,vector<int> &inorder,vector<int> & preorder,vector<int> & postorder){
    if(root==NULL)
    return;
    preorder.push_back(root->data);
    allTraversal(root->left,inorder,preorder,postorder);
    inorder.push_back(root->data);
    allTraversal(root->right,inorder,preorder,postorder);
    postorder.push_back(root->data);

}
int main()
{

    TreeNode root = TreeNode(1);
    TreeNode l =TreeNode(2);
    TreeNode r = TreeNode(3);
    root.left = &l;
    root.right = &r;
    TreeNode ll=TreeNode(4);
    TreeNode lr=TreeNode(5);
    TreeNode rl=TreeNode(6);
    TreeNode rr=TreeNode(7);
    TreeNode llr  = TreeNode (8);
    TreeNode lrl = TreeNode (9);
    TreeNode rll = TreeNode (10);
    TreeNode rlr = TreeNode (11);
    TreeNode rrl = TreeNode (12);
    TreeNode rrr = TreeNode (13);
    l.left = &ll;
    l.right=&lr;
    r.left = &rl;
    r.right = &rr;
    ll.right = &llr;
    lr.left = &lrl;
    rl.left=&rll;
    rl.right = &rlr;
    rr.left = &rrl;
    rr.right=&rrr;
    vector<int> inorder;
    vector<int> preorder;
    vector<int> postorder;
    allTraversal(&root,inorder,preorder,postorder);
    for(int i =0 ;i<inorder.size();i++){
        cout<<preorder[i]<<" "<<inorder[i]<<" "<<postorder[i]<<endl;
    }
    // morrisInorder(&root);
    // morrisPreorder(&root);
return 0;
}