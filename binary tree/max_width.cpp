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

int maxWidth(TreeNode* root){
    int ans=0;
    queue<pair<TreeNode*,int>> q;
    q.push({root,1});
    while(!q.empty()){
        int size = q.size();
        int mi = q.front().second;
        vector<int> curr_level;
        for(int i =0;i<size;i++){
            int index = q.front().second-mi;
            TreeNode* node = q.front().first;
            if(node->left!=NULL)
            q.push({node->left,2*(index)-1});
            if(node->right!=NULL)
            q.push({node->right,2*(index)});
            curr_level.push_back(index);
            q.pop();

        }
        for(auto it: curr_level)
        cout<<it<<" ";
        cout<<endl;
        int maxi = *max_element(curr_level.begin(),curr_level.end());
        int mini = *min_element(curr_level.begin(),curr_level.end());
        ans = max(ans,maxi-mini+1);
    }
    return ans;
}

int main()
{
    TreeNode root = TreeNode(1);
    TreeNode l =TreeNode(3);
    TreeNode r = TreeNode(2);
    root.left = &l;
    root.right = &r;
    TreeNode ll=TreeNode(5);
    // TreeNode lr=TreeNode(5);
    // TreeNode rl=TreeNode(6);
    TreeNode rr=TreeNode(9);
    TreeNode lll=TreeNode(6);
    // TreeNode llr  = TreeNode (8);
    // TreeNode lrl = TreeNode (9);
    // TreeNode rll = TreeNode (10);
    // TreeNode rlr = TreeNode (11);
    TreeNode rrl = TreeNode (7);
    // TreeNode rrr = TreeNode (13);
    l.left = &ll;
    // l.right=&lr;
    // r.left = &rl;
    r.right = &rr;
    ll.left= &lll;
    // lr.left = &lrl;
    // rl.left=&rll;
    // rl.right = &rlr;
    rr.left = &rrl;
    // rr.right=&rrr;
    cout<<maxWidth(&root);

return 0;
}