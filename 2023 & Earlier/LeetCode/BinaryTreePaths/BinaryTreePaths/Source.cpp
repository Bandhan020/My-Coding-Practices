#include <iostream>
#include <string>
#include <vector>
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

string convert(vector<int>& path) {
	string ans = "";
	int n = path.size();
	for (int i = 0; i < n - 1; i++) {
		ans += to_string(path[i]);
		ans.push_back('-');
		ans.push_back('>');
	}
	ans += to_string(path[n - 1]);
	return ans;
}


void solve(TreeNode* root, vector<int>& path, vector<string>& ans) {
	if (root == NULL) return;
	if (root->left == NULL && root->right == NULL) {
		path.push_back(root->val);
		ans.push_back(convert(path));
		path.pop_back();
		return;
	}
	path.push_back(root->val);
	solve(root->left, path, ans);
	solve(root->right, path, ans);
	path.pop_back();
	return;

}

vector<string> binaryTreePaths(TreeNode* root) {
	vector<string>ans;
	vector<int>path;
	solve(root, path, ans);
	return ans;
}

int main()
{
	vector<string>ans;
	TreeNode *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->right = newNode(5);
	ans=binaryTreePaths(root);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
	return 0;
}

