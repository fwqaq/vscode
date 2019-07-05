#include <iostream>
#include <set>
#include <vector>
using namespace std;
class Solution {
public:
	/**
	*  正数数组中的最小不可组成和
	*  输入：正数数组arr
	*  返回：正数数组中的最小不可组成和
	*/
	int getFirstUnFormedNum(vector<int> arr, int len) {
		set<int> S;
		vector<int> tmp;
		int mi = 0x7fffffff;
		for (int i = 0; i < len; ++i) {
			if (arr[i] <  mi) mi = arr[i];
			for (set<int>::iterator it = S.begin(); it != S.end(); ++it) tmp.push_back(*it + arr[i]);
			for (unsigned int i = 0; i < tmp.size(); ++i)S.insert(tmp[i]);
			S.insert(arr[i]);
			tmp.clear();
		}
		for (int i = mi;; ++i) if (S.find(i) == S.end()) return i;
		return -1;
	}
};
int main(){
	Solution s;
	vector<int>v{ 1, 2, 3, 4 };
	cout << s.getFirstUnFormedNum(v, v.size()) << endl;

	system("pause");
	return EXIT_SUCCESS;
}