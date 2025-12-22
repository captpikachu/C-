#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
Node* left;
int data;
Node* right;
Node(){
    data = 0;
    left = right = NULL;
}
Node(int n){
data = n;
left = NULL;
right = NULL;
}
};

int main()
{
Node root = Node(1);
Node left_1 = Node(2);
Node right_1 = Node(3);
root.left = &left_1;
root.right = &right_1;
cout<<(root.left)->data<<" "<<root.data<<" "<<(root.right)->data;


return 0;
}