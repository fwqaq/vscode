#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int rob(vector<int>& nums) {
		//nums�ĳ��Ⱦ����������ܹ�͵ȡ������������û�
		int len = nums.size();
		//͵��һ�����ӣ������һ�����ӣ���һ�������һ������͵
		int sum1 = 0;
		for (int i = 0; i < nums.size() - 1; i+=2){
			sum1 += nums[i];
		}
		int sum2 = 0;
		for (int i = nums.size() - 1; i>0; i -= 2){
			sum2 += nums[i];
		}
		//���������ֻȡ�м������
		int sum3 = 0;
		for (int i = 1; i < nums.size() - 1; i+=2){
			sum3 += nums[i];
		}
		//ȡ���������ֵ����ֵ
		int max1 = 0;
		max1 = sum1>sum2 ? sum1 : sum2;
		max1 = sum3 > max1 ? sum3 : max1;
		return max1;
	}
};
int main(){
	Solution s;
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);
	cout << s.rob(v) << endl;
	system("pause");
	return EXIT_SUCCESS;
}