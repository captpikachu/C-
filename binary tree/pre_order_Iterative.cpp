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
void preOrderIt(TreeNode* root){
    vector<int> ans;
    stack<TreeNode*> s;
    if(root!=NULL)
    s.push(root);
    // TreeNode* temp = root;
    // while(temp!=NULL){
    //     ans.push_back(temp->data);
    //     if(temp->right!=NULL)q.push(temp->right);
    //     temp = temp->left;
    // }
    TreeNode* temp = s.top();
    while(!s.empty()){
        
    while(temp!=NULL){
        ans.push_back(temp->data);
        cout<<temp->data<<" ";
        // q.pop();
        if(temp->right!=NULL)s.push(temp->right);
        temp = temp->left;
    }
    temp=s.top();
    s.pop();
        // ans.push_back(q.front()->data);
    }
  
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
preOrderIt(&root);
return 0;
}