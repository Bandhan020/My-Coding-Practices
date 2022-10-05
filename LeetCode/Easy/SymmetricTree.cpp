#include <stdio.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
  }; 

  bool isSameTree(TreeNode* p, TreeNode* q) {
          if(!p&&!q) {
              return true;
          }
          else if(!p||!q) {
              return false;
              }
          else if(q->val!=p->val){
              return false;
          }
          return isSameTree(p->left,q->right) && isSameTree(p->right,q->left);
      }

  bool isSymmetric(TreeNode* root) {
        
    }


  int main()
  {

  }