#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		int left = 0;
		int right = height.size() - 1;
		int max1 = 0;
		while (left < right){
			int l = right - left;
			int h = 0;
			if (height[left] < height[right]){
				h = height[left];
				left++;
			}
			else{
				h = height[right];
				right--;
			}
			int area = h*l;
			max1 = area>max1 ? area : max1;
		}
		return max1;
	}
};
int main(){
	Solution s;
	vector<int>v;
	v.push_back(1);
	v.push_back(8);
	v.push_back(6);
	v.push_back(2);
	v.push_back(5);
	v.push_back(4);
	v.push_back(8);
	v.push_back(3);
	v.push_back(7);
	cout << s.maxArea(v) << endl;
	system("pause");
	return EXIT_SUCCESS;
}