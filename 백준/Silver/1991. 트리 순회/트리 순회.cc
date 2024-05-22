#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	char label;
	TreeNode* left, * right;
};

vector<TreeNode> tree(26);

void preorder(TreeNode* root) {
	if (root == NULL) return;
	cout << root->label;
	preorder(root->left);
	preorder(root->right);
}

void inorder(TreeNode* root) {
	if (root == NULL) return;
	inorder(root->left);
	cout << root->label;
	inorder(root->right);
}

void postorder(TreeNode* root) {
	if (root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->label;
}

int main() {
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		char v, l, r;
		cin >> v >> l >> r;
		tree[v - 'A'].label = v;
		if (l != '.') tree[v - 'A'].left = &tree[l - 'A'];
		if (r != '.') tree[v - 'A'].right = &tree[r - 'A'];
	}

	preorder(&tree[0]);
	cout << '\n';
	inorder(&tree[0]);
	cout << '\n';
	postorder(&tree[0]);
}