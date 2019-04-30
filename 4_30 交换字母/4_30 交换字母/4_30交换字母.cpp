#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//int maxCharCount()

int main() {

	string str;
	int m;

	int countArr[26] = { 0 };

	cin >> str >> m;

	int len = str.size();

	vector<vector<int>> charPoss = vector<vector<int>>(26, vector<int>());

	// init

	for (int i = 0; i < len; ++i) {
		int index = str.at(i) - 'a';
		int pos = i;
		// ��¼���п��ܵ�λ��
		charPoss[index].push_back(pos);
	}

	int maxCount = 0;

	for (int i = 0; i < 26; ++i) {
		int n = charPoss[i].size();
		if (n < maxCount || n == 0)
			continue;

		// ��¼ÿһ����������������
		int mid = (n - 1) / 2;

		//  ȡ�м�ľ���о��ǶԵ�
		//        int midPos = (charPoss[i][0] + charPoss[i][n - 1]) >> 1;
		//        int mid = 0;
		//        int minDes = charPoss[i][n - 1];
		//        for (int j = 0; j < n; ++j) {
		//            int des = abs(charPoss[i][j] - midPos);
		//            if (des < minDes) {
		//                minDes = des;
		//                mid = j;
		//            }
		//        }


		int changeCount = 0;
		int count = 1; // Ĭ�� mid λ���ϵ��Ѿ�ѡ��

		// ��
		for (int left = mid - 1; left >= 0; --left) {
			changeCount += charPoss[i][mid] - charPoss[i][left] - (mid - left);
			if (changeCount <= m)
				count++;
		}

		// ��
		for (int right = mid + 1; right <= n - 1; ++right) {
			changeCount += charPoss[i][right] - charPoss[i][mid] - (right - mid);

			if (changeCount <= m)
				count++;
		}

		maxCount = max(maxCount, count);

	}


	cout << maxCount << endl;
	//    std::cout << "Hello, World!" << std::endl;
	return 0;
}