#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	void oddInOddEvenInEven(vector<int>& arr, int len) {
		int i = 0, j = 1;
		while (i < len&&j < len){
			if (arr[i] % 2 != 0 && arr[j] % 2 == 0){
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
				i += 2;
				j += 2;
				continue;
			}
			if (arr[i] % 2 == 0)//Å¼Êý
				i += 2;
			if (arr[j] % 2 != 0)//ÆæÊý
				j += 2;
		}
	}
};

int main(){
	Solution s;
	vector<int>v{ 1, 2, 3, 4,1,2,3,4,6,841,651,9,81,6};
	s.oddInOddEvenInEven(v, v.size());
	for (auto e : v){
		cout << e << endl;
	}


	system("pause");
	return EXIT_SUCCESS;
}