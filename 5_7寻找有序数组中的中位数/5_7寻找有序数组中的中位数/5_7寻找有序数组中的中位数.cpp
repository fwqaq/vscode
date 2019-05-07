#include <iostream>
#include <vector>
using namespace std;
double get_ZWS(vector<int>nums1, vector<int>nums2){
	int count = 0;//记录我们拿出的数量
	int i = 0;
	int j = 0;
	double ret = 0;
	int sum = nums1.size() + nums2.size();//总的个数
	while (count < sum){
		int ss = 0;
		if (j == nums2.size()  && i<nums1.size()){
		ss = nums1[i];
			i++;
		}
		else if (i == nums1.size()  && j<nums2.size()){
			ss = nums2[j];
			j++;
		}
		else if (nums1[i] < nums2[j]){
			ss = nums1[i];
			i++;
		}
		else{
			ss = nums2[j];
			j++;
		}
		count++;
		if (sum % 2 != 0 && count == sum / 2+1){
			ret = ss;
			break;
		}
		if (sum % 2 == 0&&count == sum/2){
			ret = ret + ss;
		}
		if (sum % 2 == 0 && count == sum / 2 + 1){
			ret = ret + ss;
			ret = ret / 2.0;
			break;
		}
	}
		return ret;
}
int main(){
	vector<int>v1;
	vector<int>v2;
	v1.push_back(1);
	v1.push_back(3);
	v2.push_back(8);
	v1.push_back(6);
	v2.push_back(5);
	cout << get_ZWS(v1,v2);
	system("pause");
	return EXIT_SUCCESS;
}