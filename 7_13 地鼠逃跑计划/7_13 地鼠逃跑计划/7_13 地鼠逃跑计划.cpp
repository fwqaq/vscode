#include <iostream>

using namespace std;

int dfs(int i, int j, const int& row, const int& col, int step, const int& K){
	int now = 0;

	if (step == K)    //K步之后还在田地里
		return 0;

	if (i == 0) ++now;
	if (j == 0) ++now;
	if (i == row - 1) ++now;
	if (j == col - 1) ++now;

	int up, down, left, right;
	up = down = left = right = 0;
	if (i > 0)
		up = dfs(i - 1, j, row, col, step + 1, K);
	if (i<row - 1)
		down = dfs(i + 1, j, row, col, step + 1, K);
	if (j>0)
		left = dfs(i, j - 1, row, col, step + 1, K);
	if (j < col - 1)
		right = dfs(i, j + 1, row, col, step + 1, K);

	return now + up + down + left + right;
}

int main() {
	int m, n, x, y, k;

	cin >> m >> n >> x >> y >> k;

	int result = dfs(x, y, m, n, 0, k);

	cout << result << endl;


	system("pause");
	return EXIT_SUCCESS;
}
