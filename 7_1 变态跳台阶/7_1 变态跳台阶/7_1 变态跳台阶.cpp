#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int jumpFloorII(int number) {
		if (number == 1){
			return 1;
		}
		if (number == 2){
			return 2;
		}
		vector<int>v;
		v.resize(number + 1);
		v[0] = 0;
		v[1] = 1;
		v[2] = 2;
		for (int i = 3; i <= number; i++){
			int sum = 0;
			for (int j = i - 1; j > 0; j--){
				sum += v[j];
			}
			v[i] = sum+1;
		}
		return v[number];
	}
};
int main(){
	Solution s;
	cout << s.jumpFloorII(1) << endl;
	cout << s.jumpFloorII(4) << endl;
	cout << s.jumpFloorII(8) << endl;
	cout << s.jumpFloorII(10) << endl;
	system("pause");
	return EXIT_SUCCESS;
}