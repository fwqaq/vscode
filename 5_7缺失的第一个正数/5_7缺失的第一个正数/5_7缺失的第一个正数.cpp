#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {

		int l = 1;
		priority_queue<int, vector<int>, greater<int>> r;
		for (auto num : nums) {

			if (num < l) {
				continue;
			}

			if (num == l) {
				l += 1;
			}
			else {
				r.push(num);
			}

			while (!r.empty() && r.top() == l) {
				do {
					r.pop();
				} while (!r.empty() && r.top() == l);

				l += 1;
			}
		}

		return l;
	}
};
int main(){
	vector<int>v{ 1, 2, 0 };
	Solution s;
	cout << s.firstMissingPositive(v) << endl;

	system("pause");
	return EXIT_SUCCESS;
}