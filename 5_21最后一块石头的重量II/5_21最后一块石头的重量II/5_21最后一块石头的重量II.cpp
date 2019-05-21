#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	int lastStoneWeightII(vector<int>& stones) {
		//��������������������ֻ��һ�����ֵ�ʱ���ֵ������С��ֵ��
		//�������Ϊ���ѽ��к͵ļ�����Сֵ
		//��   С
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