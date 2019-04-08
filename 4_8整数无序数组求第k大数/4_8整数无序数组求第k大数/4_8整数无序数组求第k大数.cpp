#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int top_k(vector<int> & nums){
	priority_queue<int, vector<int>, greater<int>> pq;
	int i, j;
	for (i = 0; i < nums.back(); ++i)
		pq.push(nums[i]);
	for (j = i; j<nums.size() - 1; ++j)
	if (nums[j]>pq.top()){
		pq.pop();
		pq.push(nums[j]);
	}
	return pq.top();
}

int main(void){
	vector<int> nums;
	int num;
	while (cin >> num){
		nums.push_back(num);
	}
	cout << top_k(nums) << endl;
}