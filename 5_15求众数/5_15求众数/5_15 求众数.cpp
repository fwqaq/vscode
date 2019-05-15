#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> majorityElement(vector<int>& nums) {
		vector<int>ret;
		//ʱ�临�Ӷ�O(n)���ռ临�Ӷ�ΪO(1);
		//���ڵ������ǵ�1/3,����ֻ����������
		int x = 0, y = 0;
		int cx = 0;
		int cy = 0;
		for (int num : nums){
			if ((cx == 0 || num == x) && num != y){
				++cx;
				x = num;//��ֵ
			}
			else if (cy == 0 || num == y){
				++cy;
				y = num;
			}
			else{
				--cx;
				--cy;
			}
		}//��ʱ��������ľ�������������������x,y
		int count1 = 0;
		int count2 = 0;
		for (int num : nums){
			if (num == x){
				count1++;
			}
			if (num == y){
				count2++;
			}
		}
		if (count1 > nums.size() / 3){
			ret.push_back(x);
		}
		if (count2 > nums.size() / 3){
			ret.push_back(y);
		}
		return ret;
	}
};
int main(){
	vector<int>v{ 1, 1, 1, 3, 3, 2, 2, 2};
	vector<int>vv;

	Solution s;
	vv = s.majorityElement(v);
	for (int i = 0; i < vv.size(); i++){
		cout << vv[i] << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}