#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
};

struct TreeNode* newNode(int val) {
	struct TreeNode *newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	newnode->val = val;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

void DFS(TreeNode* root, vector<string>& res, string path) {
	path += to_string(root->val);
	if (root->left || root->right) path += "->";
	else {
		res.push_back(path);
		return;
	}
	if (root->left) DFS(root->left, res, path);
	if (root->right) DFS(root->right, res, path);
}


vector<string> binaryTreePaths(TreeNode* root) {
	vector<string>res;
	if (!root) return res;
	DFS(root, res, "");
	return res;
}


int main()
{
	vector<string>ans;
	cout << "Working" << endl;
	TreeNode *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->right = newNode(5);
	ans = binaryTreePaths(root);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
	return 0;
}