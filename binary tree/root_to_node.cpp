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
bool rec(TreeNode* root,vector<int> & ans,int target){
if(!root)
return false;

ans.push_back(root->data);

if(root->data==target)
return true;

if (rec(root->left,ans,target)||rec(root->right,ans,target))
return true;
// return true;
ans.pop_back();
return false; // I missed this 
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
vector<int> ans;
rec(&root,ans,12);
for(auto it: ans)
cout<<it<<" ";
return 0;
}