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


vector<vector<int>> levelOrder(TreeNode* root){
vector<vector<int>> ans;
queue<TreeNode*> q;
if(root==NULL)
return ans;
q.push(root);
TreeNode* temp = root;
while(!q.empty()){
vector<int> curr_level;
int size = q.size();

for(int i=0;i<size;i++){
    // if(i==size-1) right view
    {curr_level.push_back(q.front()->data);
    cout<<q.front()->data<<" ";}
    if(q.front()->left!=NULL)
    q.push((q.front()->left));
    if(q.front()->right!=NULL)
    q.push(q.front()->right);
    q.pop();
}
ans.push_back(curr_level);
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
l.left = &ll;
l.right=&lr;
r.left = &rl;
r.right = &rr;
levelOrder(&root);

return 0;
}