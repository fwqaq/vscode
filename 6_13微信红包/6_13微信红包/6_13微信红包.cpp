#include<iostream>
#include <vector>
using namespace std;
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		// write code here
		//先找到最多的红包的金额
		int num = 0;
		int count = 0;
		for(int i = 0; i < n; i++){
			if (count == 0){
				num = gifts[0];
				count = 1;
				continue;
			}
			if (gifts[i] == num){
				count++;
			}
			if (gifts[i] != num){
				count--;
			}
		}
		count = 0;
		for (int i = 0; i < n; i++){
			if (num == gifts[i]){
				count++;
			}
		}
		if (count > n / 2){
			return num;
		}
		else{
			return 0;
		}
	}
};
int main(){
	Gift g;
	vector<int>v{ 1, 2, 3, 2, 2 };
	cout << g.getValue(v, 5) << endl;

	system("pause");
	return EXIT_SUCCESS;
}