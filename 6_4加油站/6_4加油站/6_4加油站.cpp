#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
		int ret = -1;
		for (int i = 0; i < gas.size(); i++){
			if (gas[i] >= cost[i]){
				//上面的数字大于我们下面的数字
				int count = 0;
				int top_sum = 0;
				int xia_sum = 0;
				int z = i;
				int flag = 1;
				while (count < gas.size()){
					//从i开始
					top_sum += gas[z];
					xia_sum += cost[z];
					z = (z + 1) % gas.size();
					count++;
					if (top_sum < xia_sum){
						flag = 0;
						break;
					}
				}
				if (flag == 1){
					ret = i;
				}
			}
		}
		return ret;
	}
};

int main(){

	Solution s;
	cout<<s.canCompleteCircuit(vector<int>{1, 2, 3, 4, 5}, vector<int>{3, 4, 5, 1, 2});
	system("pause");
	return EXIT_SUCCESS;
}