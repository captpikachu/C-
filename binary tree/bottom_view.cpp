#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
TreeNode* left;
int val;
TreeNode* right;
TreeNode(){
    val = 0;
    left = right = NULL;
}
TreeNode(int n){
val = n;
left = NULL;
right = NULL;
}};
struct PairComparator {
    bool operator()(const std::pair<int, int>& a, const std::pair<int, int>& b) const {
        if (a.second != b.second) {
            return a.second < b.second;
        }
        return a.first < b.first;
    }
};

// vector<vector<pair<int,pair<int,int>>>> levelOrder(TreeNode* root){
// vector<vector<pair<int,pair<int,int>>>> ans;
// queue <pair<TreeNode*,int>> q;
// vector<vector<int>> a;
// std::map<std::pair<int, int>, int, PairComparator> m1;
// q.push({root,0});
// while(!q.empty()){
//     int size = q.size();    
//     int row = ans.size();
//     vector<pair<int,pair<int,int>>> t;
//     for(int i=0;i<size;i++){
//         int col = q.front().second;
//         t.push_back({q.front().first->data,{row,col}});
//         m1[{row,col}] =  m1.find({row,col})!=m1.end()?(q.front().first->data>m1[{row,col}]?q.front().first->data:m1[{row,col}]) :q.front().first->data;
//         if(q.front().first->left!=NULL)
//         q.push({q.front().first->left,col-1});
//         if(q.front().first->right!=NULL)
//         q.push({q.front().first->right,col+1});
//         q.pop();
//     }
//     ans.push_back(t);
// }
// for (const auto& entry : m1) {
//     int col = entry.first.second ;
//     vector<int> t;
//     while(col==entry.first.second){
//         t.push_back(entry.second);

//     }
//     a.push_back(t);
//     std::cout << "Key: (" << entry.first.first << ", " << entry.first.second 
//               << "), Value: " << entry.second << std::endl;
// }
// return ans;
// }
vector<vector<int>> verticalTraversal(TreeNode* root) {
    // vector<vector<pair<int,pair<int,int>>>> ans;
    queue <pair<TreeNode*,int>> q;
    vector<vector<int>> a;
    std::map<std::pair<int, int>, int, PairComparator> m1;
    q.push({root,0});
    int row = -1;
    while(!q.empty()){
        int size = q.size();    
        row+=1;
        // vector<pair<int,pair<int,int>>> t;
        for(int i=0;i<size;i++){
            int col = q.front().second;
            // t.push_back({q.front().first->val,{row,col}});
            m1[{row,col}] =  m1.find({row,col})!=m1.end()?(q.front().first->val>m1[{row,col}]?q.front().first->val:m1[{row,col}]) :q.front().first->val;
            if(q.front().first->left!=NULL)
            q.push({q.front().first->left,col-1});
            if(q.front().first->right!=NULL)
            q.push({q.front().first->right,col+1});
            q.pop();
        }
        // ans.push_back(t);
    }
    map<int, vector<int>> verticalGroups;
    for (const auto& entry : m1) {
        int col = entry.first.second;
        verticalGroups[col].push_back(entry.second);
    }

    // Convert the groups to the final result
    for (const auto& group : verticalGroups) {
        a.push_back(group.second);
    }
    // int col = m1.begin()->first.second;
    // for (const auto& entry : m1) {
    //     // int col = entry.first.second ;
    //     vector<int> t;
    //     // for(auto it: entry.second){
    //     //     t.push_back(entry.second);
    //     //     cout<<entry.second<<" ";
            
    //     // }
    //     col = entry.first.second;
    //     cout<<endl;
    //     a.push_back(t);
    //     // std::cout << "Key: (" << entry.first.first << ", " << entry.first.second 
    //     //           << "), Value: " << entry.second << std::endl;
    // }
    return a;
        }
int main()
{
TreeNode root = TreeNode(1);
TreeNode l =TreeNode(2);
TreeNode r = TreeNode(3);
root.left = &l;
root.right = &r;
TreeNode ll=TreeNode(4);
TreeNode lr=TreeNode(6);
TreeNode rl=TreeNode(5);
TreeNode rr=TreeNode(7);
l.left = &ll;
l.right=&lr;
r.left = &rl;
r.right = &rr;
verticalTraversal(&root);

return 0;
}