#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
bool is_Amazing(int in){

		vector<int> arry;
	int num = in;
	int half = 0;
	while (num){//将数字打散存入arry数组
		arry.push_back(num % 10);
		half += num % 10;
		num /= 10;
	}
	if (half % 2 != 0) return false;
	half /= 2;
	vector<int> dp(half + 1); //之后这一小段用的是01背包，判断能装下最大的数和一半是否相等。
	for (int i = 0; i < arry.size(); i++){
		for (int j = half; j >= arry[i]; j--){
			dp[j] = max(dp[j], dp[j - arry[i]] + arry[i]);
		}
	}
	return dp[half] == half;
}
int main(){
	int num = 0;
	int start = 0;
	cin >> start;
	cin >> num;
	int sum = 0;
	for (int i = start; i <= num; i++){
		if (is_Amazing(i)){
			sum++;
		}
	}
	cout << sum << endl;
	system("pause");
	return EXIT_SUCCESS;
}