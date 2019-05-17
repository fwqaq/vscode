#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <functional>
using namespace std;
class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
			//单调栈解法
			int len = heights.size();
			heights.push_back(0);
			stack<int> s;
			int area = 0;
			for (int i = 0; i<len + 1; i++)
			{
				while (!s.empty() && heights[s.top()]>heights[i])
				{
					int h = heights[s.top()];
					s.pop();
					area = max1(area, h*(s.empty() ? i : (i - s.top() - 1)));
				}
				s.push(i);
			}
			return area;
	}
	int max1(int a, int b){
		return a > b ? a : b;
	}
};
int main(){
	vector<int>v{ 1, 5, 8, 6, 3, 5, 4 };
	Solution s;
	cout<<s.largestRectangleArea(v);
	system("pause");
	return EXIT_SUCCESS;
}