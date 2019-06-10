#include <iostream>
#include <stack>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	bool GetPath(TreeNode* root, TreeNode* x, stack<TreeNode*>& path)
	{
		if (root == nullptr)
			return false;

		path.push(root);
		if (root == x)
			return true;

		if (GetPath(root->left, x, path) == true)
			return true;

		if (GetPath(root->right, x, path) == true)
			return true;

		path.pop();
		return false;
	}

	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
	{
		stack<TreeNode*> ppath;
		stack<TreeNode*> qpath;
		GetPath(root, p, ppath);
		GetPath(root, q, qpath);

		while (ppath.size() != qpath.size())
		{
			if (ppath.size() > qpath.size())
				ppath.pop();
			else
				qpath.pop();
		}

		while (ppath.top() != qpath.top())
		{
			ppath.pop();
			qpath.pop();
		}

		return ppath.top();
	}
};