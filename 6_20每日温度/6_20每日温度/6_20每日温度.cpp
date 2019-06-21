#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& T) {
		//�ҵ����ڵ�ǰ������Ҫ�ƶ����� �����ʼ�ƶ���������
		vector<int>v;
		v.resize(T.size());
		int len = T.size();
		v[len - 1] = 0;
		for (int i = T.size() - 2; i >= 0; i--) {
			for (int j = i + 1; j < T.size(); j += v[j]) {
				if (T[i] < T[j]) {
					v[i] = j - i;
					break;
				}
				else if (v[j] == 0) {
					v[i] = 0;
					break;
				}
			}
		}
		return v;
	}
};
int main(){
	Solution s;
	vector<int>v{ 73, 74, 75, 71, 69, 72, 76, 73 };

	vector<int>vv = s.dailyTemperatures(v);
	for (auto e : vv){
		cout << e << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}