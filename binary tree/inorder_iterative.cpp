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
void printStack(stack <TreeNode*> s){
    cout<<" stack is : ";
    for(int i=0;i<s.size();i++){
        cout<<s.top()->data<<" ";
        s.pop();
    }
cout<<endl;
}
void inorderIterative(TreeNode* root){
    vector<int>ans;
    stack<TreeNode*> s;
    if(root!=NULL)
    s.push(root);
    TreeNode*temp = root;
    while(!s.empty()){
         s.pop();
       while(temp!=NULL){
        s.push(temp);
        temp = temp->left;
        }
        cout<<s.top()->data<<" ";
        temp = s.top()->right;        
    }     
}
    // vector<int> inorderIterative(TreeNode* root) {
    //     // vector<int> ans;
    //     // inOrder(root,ans);
    //     // return ans;
    //         vector<int> ans;
    // stack<TreeNode*> s;
    // if(root!=NULL)
    // s.push(root);
    // TreeNode*temp = root;
    // while(!s.empty()){
    //      s.pop();
    //    while(temp!=NULL){
    //     s.push(temp);
    //     temp = temp->left;
    //     }
    //     ans.push_back(s.top()->data);
    //     temp = s.top()->right;        
    // }     
    // return ans;
    // }

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
inorderIterative(&root);

return 0;
}