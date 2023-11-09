#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	string data;
	TreeNode* left;
	TreeNode* right;
};
TreeNode* BuildTree(const string& str,int& index) {
	if (index >= str.size() || str[index] == '@') {
		return nullptr;
	}
	TreeNode* tree = new TreeNode;
	tree->data = (1, str[index]);
	tree->left = nullptr;
	tree->right = nullptr;

	++index;
	tree->left = BuildTree(str, index);
	++index;
	tree->right = BuildTree(str, index);

	return tree;
}
TreeNode* BuildTree(const string& str) {
	int index = 0;
	return BuildTree(str, index);
}
void InorderTraversal(TreeNode* tree) {
	if (tree == nullptr) {
		return;
	}

	TreeNode* curr = tree;
	stack<TreeNode*> dt;

	while (curr != nullptr || !dt.empty()) {
		while (curr != nullptr) {
			dt.push(curr);
			curr = curr->left;
		}
		curr = dt.top();
		dt.pop();
		cout << curr->data << " ";

		curr = curr->right;
	}
}
int findnumchildren(TreeNode* tree) {
	if (tree == nullptr) {
		return 0;
	}
	queue<TreeNode*> que;
	que.push(tree);
	int numchildren = 0;
	while (!que.empty()) {
		TreeNode* curr = que.front();
		que.pop();
		if (curr->left == nullptr && curr->right == nullptr) {
			numchildren += 1;
		}
		if(curr->left)
		que.push(curr->left);
		if(curr->right)
		que.push(curr->right);
	}
	return numchildren;
}
int main() {
	string s = "ABC@@DE@G@@F@@@";
	TreeNode* tree = BuildTree(s);
	InorderTraversal(tree);
	cout << endl;
	cout << "结点度数为一的数量是：" << findnumchildren(tree);
}