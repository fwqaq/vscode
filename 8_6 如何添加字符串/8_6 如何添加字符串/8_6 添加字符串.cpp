#include <iostream>
using namespace std;
int n, m;
int dfs(int sum, int current, int step) {
	//��ǰ�ͣ���ǰλ����ǰ���֣�������
	if (step == n + 1) {
		if (sum == m&&current == step) {
			return 1;
		}
		else return 0;
	}
	//����ǰλΪһ��ʱ�򣬲��������������1 2 3 �õ�-15��ͨ��-12-3�ǲ�����ġ�ͬ��1Ҳ���ܵõ�-1
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