#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		int len = pushV.size();
		stack<int>s;
		int j = 0;
		for (int i = 0; i < len; i++){
			s.push(pushV[i]);
			while (!s.empty()&&popV[j] == s.top()){
				j++;
				s.pop();
			}
		}
		if (j < len || (!s.empty())){
			return false;
		}
		return true;
	}
};
int main(){
	Solution s;
	cout << s.IsPopOrder({ 1, 2, 3, 4, 5 }, { 5, 4, 3, 2, 1 }) << endl;
	system("pause");
	return EXIT_SUCCESS;
}