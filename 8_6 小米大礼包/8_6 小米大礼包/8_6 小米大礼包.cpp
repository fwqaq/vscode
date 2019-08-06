#include <iostream>
#include <vector>
using namespace std;
int n, total;
int main() {
	int temp;
	cin >> n;
	vector<int> m_array;
	for (unsigned int j = 0; j < n; ++j) {
		cin >> temp;
		m_array.push_back(temp);
	}
	cin >> total;
	//cout << count(0,0);
	vector<int> result(total + 1, 0);
	result[0] = 1;
	for (unsigned int i = 0; i < n; ++i) {
		for (unsigned int j = total; j >= m_array[i]; --j) {
			result[j] = result[j] || result[j - m_array[i]];
		}
	}
	cout << result[total];
	system("pause");
	return 0;
}