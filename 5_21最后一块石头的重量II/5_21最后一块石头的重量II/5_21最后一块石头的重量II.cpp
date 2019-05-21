#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int lastStoneWeightII(vector<int>& stones) {
		//就是让数字相减，到最后只有一个数字的时候的值就是最小的值。
		//把数组分为两堆进行和的减的最小值
		//大   小
		int all = 0;
		for (auto e : stones)all += e;
		int ans = all;
		vector<int>dp(all + 1, 0);
		dp[0] = 1;
		for (auto e : stones)
		{
			for (int i = all; i >= 0; i--)
			{
				if (dp[i] != 0 && i + e <= all)
				{
					dp[e + i] = 1;
					ans = min(ans, abs(all - e - i - e - i));
				}
			}
		}
		return ans;
	}
	int min(int a, int b){
		return a < b ? a : b;
	}
};
int main(){
	vector<int>v{ 2, 7, 4, 1, 8, 1 };
	Solution s;
	cout<<s.lastStoneWeightII(v);
	system("pause");
	return EXIT_SUCCESS;
}