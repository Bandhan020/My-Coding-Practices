#include <iostream>
#include <string>
#include <vector>
#include <deque>
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

vector<string> binaryTreePaths(TreeNode* root) {
	vector<string>res;
	if (!root) return res;
	deque<pair<TreeNode*, string>>cur;
	deque<pair<TreeNode*, string>>next;
	cur.push_back(make_pair(root, ""));
	while (!cur.empty()) {
		auto p = cur.front();
		cur.pop_front();
		p.second += to_string(p.first->val);
		if (p.first->left || p.first->right) p.second += "->";
		else res.push_back(p.second);
		if (p.first->left) next.push_back(make_pair(p.first->left, p.second));
		if (p.first->right) next.push_back(make_pair(p.first->right, p.second));
		if (cur.empty()) swap(cur, next);
	}
	return res;
}


int main()
{
	vector<string>ans;
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