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
}};

void rec(TreeNode* root,vector<int> & temp,vector<vector<int>> &ans){
    if(!root)
    {
    return ;}
    temp.push_back(root->data);

    if(root->left==NULL && root->right==NULL){
    ans.push_back(temp);
    temp.pop_back();
    return ;}

    rec(root->left,temp,ans);
    
    rec(root->right,temp,ans);
    temp.pop_back();

    }
            vector<vector<int>> allRootToLeaf(TreeNode* root) {
                //your code goes here
                vector<vector<int>> ans;
                vector<int> temp;
                rec(root,temp,ans);
                for(auto it:ans){
                for(auto jt: it)
                    cout<<jt<<" ";
                 cout<<endl;
                            }
                return ans;
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
// vector<vector<int>> ans;
// vector<int> temp;
allRootToLeaf(&root);
// for(auto it:ans){
//     for(auto jt: it)
//     cout<<jt<<" ";
//     cout<<endl;
// }
return 0;
}