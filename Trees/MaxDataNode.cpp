#include <bits/stdc++.h>
using namespace std;

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
    // Write your code here
    if(root == NULL) return root;
    TreeNode <int>* temp = root;
    for(int i = 0;i < root->children.size();i++)
    {
         TreeNode <int>* a = maxDataNode(root->children[i]);
        if(temp->data < a->data) temp = a;
    }
    return temp;
}
