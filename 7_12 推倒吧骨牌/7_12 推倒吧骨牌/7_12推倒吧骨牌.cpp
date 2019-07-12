#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	string s;
	cin >> s;
	int l = s.length();
	vector<int>L, R;
	L.resize(l);
	R.resize(l);
	for (int i = 0, x = l; i < l; i++){
		if (s[i] == 'R'){
			x = l;
			R[i] = x--;
		}
		else if (s[i] == '.' && x < l)
			R[i] = x--;
		else{
			R[i] = 0;
			x = l;
		}
	}
	for (int i = l - 1, x = l; i >= 0; i--){
		if (s[i] == 'L'){
			x = l;
			L[i] = x--;
		}
		else if (s[i] == '.' && x < l)
			L[i] = x--;
		else{
			L[i] = 0;
			x = l;
		}
	}
	string r;
	for (int i = 0; i<l; i++){
		if (L[i]>R[i])
			r += 'L';
		else if (L[i] < R[i])
			r += 'R';
		else
			r += '.';
	}
	cout << r << endl;

	system("pause");
	return EXIT_SUCCESS;
}
