#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int findMax(const vector<int>& num, int index, int size){
		int max = num[index];
		for (int i = index - 1; i >= index - size + 1; i--){
			if (max < num[i])max = num[i];
		}
		return max;
	}
	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
	{
		vector<int> vec;
		for (int i = size - 1; i < num.size(); i++)
			vec.push_back(findMax(num, i, size));
		return vec;
	}
};
int main(){
	Solution s;
	vector<int>v{ 2, 3, 4, 2, 6, 2, 5, 1 };
	vector<int>vv = s.maxInWindows(v, 3);
	for (auto e : vv){
		cout << e << " ";
	}
	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}