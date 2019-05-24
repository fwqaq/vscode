#include <iostream>
#include <string>
using namespace std;
bool IsHw(string str){
	int i = 0;
	int j = str.size() - 1;
	while (i < j){
		if (str[i] != str[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}
int main(){
	string A;
	string B;
	while (cin >> A >> B){
		int num = 0;
		int len = A.size();
		for (int i = 0; i < len; i++){
			string c = A;
			if (IsHw(A.insert(i,B))){
				num++;
			}
			A = c;
		}
		A = A + B;
		if (IsHw(A)){
			num++;
		}
		cout << num << endl;
	}

	return 0;
}