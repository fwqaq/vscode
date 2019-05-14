#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
class Solution {
	void heapify(vector<int> &_tree, int cur, int _len) {//up-to-bottom
		while (true) {
			int minPos = cur;
			int left = 2 * cur + 1;
			int right = 2 * cur + 2;
			int father = (cur - 1) / 2;
			//父节点
			if (father >= 0 && _tree[minPos] < _tree[father])minPos = father;
			//左子节点
			if (left < _len && _tree[minPos] > _tree[left])minPos = left;
			//右子节点
			if (right < _len && _tree[minPos] > _tree[right])minPos = right;
			if (minPos == cur) break;
			swap(_tree[cur], _tree[minPos]);
			cur = minPos;
		}
	}

public:
	int findKthLargest(vector<int> &nums, int k) {
		for (int i = 0; i < nums.size(); i++) {
			if (i < k) {
				heapify(nums, i, i + 1);  //原地建堆
			}
			else if (i >= k) {
				if (nums[0] < nums[i]) swap(nums[0], nums[i]);
				heapify(nums, 0, k);//替换堆顶
			}
		}
		return nums[0];
	}
};
int main(){
	vector<int>v;
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	v.push_back(5);
	v.push_back(6);
	v.push_back(4);
	Solution s;
	cout << s.findKthLargest(v, 1) << endl;
	system("pause");
	return EXIT_SUCCESS;
}