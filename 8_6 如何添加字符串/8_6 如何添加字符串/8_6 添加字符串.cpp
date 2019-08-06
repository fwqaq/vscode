#include <iostream>
using namespace std;
int n, m;
int dfs(int sum, int current, int step) {
	//当前和，当前位，当前数字（步数）
	if (step == n + 1) {
		if (sum == m&&current == step) {
			return 1;
		}
		else return 0;
	}
	//当当前位为一的时候，不允许减操作，如1 2 3 得到-15，通过-12-3是不允许的。同理1也不能得到-1
	int temp = current;
	while (temp > 9) {
		temp = temp / 10;
	}
	if (temp == 1) return dfs(sum + current, step + 1, step + 1) + dfs(sum, current * 10 + step + 1, step + 1);
	else return  dfs(sum + current, step + 1, step + 1) + dfs(sum - current, step + 1, step + 1) + dfs(sum, current * 10 + step + 1, step + 1);
}
int main() {
	cin >> n >> m;
	cout << dfs(0, 1, 1);
	system("pause");
	return 0;
}