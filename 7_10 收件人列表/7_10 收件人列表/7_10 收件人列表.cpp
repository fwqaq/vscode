#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	int n = 0;
	while (cin >> n ){
		cin.get();
		vector<string>v;
		v.resize(n);
		for (int i = 0; i < n; i++){
			getline(cin, v[i]);
		}

		for (int i = 0; i < n; i++){
			int flag = 1;
			for (int j = 0; j < v[i].size(); j++){
				if (v[i][j] == ','||v[i][j] == ' '){
					flag = 0;
					break;
				}
			}
			if (flag == 0){
				v[i] = "\"" + v[i] + "\"";
			}
			if (i != n - 1){
				v[i] = v[i] + ", ";
			}
		}
		for (auto e : v){
			cout << e;
		}
		cout << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}