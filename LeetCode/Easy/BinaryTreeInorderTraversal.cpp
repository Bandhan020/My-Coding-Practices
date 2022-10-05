#include <bits/stdc++.h>
using namespace std;
vector<int>node;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
};

struct TreeNode *newNode(int data) {
  struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));

  node->val = data;

  node->left = NULL;
  node->right = NULL;
  return node;
}

vector<int> inorderTraversal(TreeNode* root) {
      if(root!=NULL){
          inorderTraversal(root->left);
          node.push_back(root->val);
          cout<<root->val<<"->";
          inorderTraversal(root->right);
      }
      return node;
}

int main() {
  struct TreeNode *root = newNode(1);
  root->right = newNode(1);
  root->left = newNode(2);

//   cout << "preorder traversal: ";
//   traversePreOrder(root);
  cout << "\nInorder traversal: ";
  inorderTraversal(root);
//   cout << "\nPostorder traversal: ";
//   traversePostOrder(root);
  return 0;
}