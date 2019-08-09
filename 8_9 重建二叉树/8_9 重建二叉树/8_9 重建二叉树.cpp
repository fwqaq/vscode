#include <iostream>
#include <vector>
using namespace std;
struct TreeNode{
	int m_nValue;
	TreeNode* m_pLeft;
	TreeNode* m_pRight;
};
/*
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		int inlen = vin.size();
		if (inlen == 0)
			return NULL;
		vector<int> left_pre, right_pre, left_in, right_in;
		//�������ڵ㣬���ڵ�϶���ǰ������ĵ�һ����
		TreeNode* head = new TreeNode(pre[0]);
		//�ҵ�����������ڵ�����λ��,����ڱ���gen��
		int gen = 0;
		for (int i = 0; i < inlen; i++){
			if (vin[i] == pre[0]){
				gen = i;
				break;
			}
		}

		//����������������ڵ���ߵĽڵ�λ�ڶ���������ߣ����ڵ��ұߵĽڵ�λ�ڶ��������ұ�

		//����������㣬�Զ������ڵ���й鲢

		for (int i = 0; i < gen; i++){
			left_in.push_back(vin[i]);
			left_pre.push_back(pre[i + 1]);//ǰ���һ��Ϊ���ڵ�
		}
		for (int i = gen + 1; i < inlen; i++){
			right_in.push_back(vin[i]);
			right_pre.push_back(pre[i]);
		}
		//��shell�����˼�����ƣ�ȡ��ǰ�������������ڵ���ߺ��ұߵ�����
		//�ݹ飬�ٶ�������������в��裬��������������������������ֱ��Ҷ�ڵ�
		head->left = reConstructBinaryTree(left_pre, left_in);
		head->right = reConstructBinaryTree(right_pre, right_in);
		return head;
	}
};