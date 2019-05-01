#include <iostream>
#include <vector>
using namespace std;
int main(){
	int T = 0;
	cin >> T;
	vector<vector<int>>vvv;
	for (int i = 0; i < T; i++){
		int n = 0, k = 0;
		cin >> n >> k;
		vector<int>v1;
		vector<int>v2;
		vector<int>v3;
		v3.resize(2 * n);
		for (int i = 0; i<2 * n; i++){
			int num = 0;
			cin >> num;
			if (i<n){
				v1.push_back(num);//×óÊÖ
			}
			else{
				v2.push_back(num);//ÓÒÊÖ
			}
		}
		while (k>0){
			int flag = 2 * n - 1;
			for (int i = v1.size()-1; i >= 0; i--){
				v3[flag--] = v2[i];
				v3[flag--] = v1[i];
			}
			if (--k == 0){
				break;
			}
			for (int i = 0; i < 2 * n; i++){
				if (i < n){
					v1[i] = v3[i];
				}
				else{
					v2[i-n] = v3[i];
				}
			}
		}
		vvv.push_back(v3);
	}
	for (int i = 0; i < vvv.size(); i++){
		for (int j = 0; j < vvv[i].size(); j++){
			if (j != vvv[i].size() - 1){
				cout << vvv[i][j] << " ";
			}
			else{
				cout << vvv[i][j] << endl;
			}
		}
	}
	system("pause");
	return EXIT_SUCCESS;
}