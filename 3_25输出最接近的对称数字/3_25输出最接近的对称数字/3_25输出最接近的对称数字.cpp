#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
bool is_Huiwen(vector<int>v,int len){
	int i = 0;
	len--;
	while (i < len){
		if (v[i] != v[len]){
			return false;
		}
		i++;
		len--;
	}
	return true;
}
int main(){
	//输入一个数字
	long long num = 0;
	cin >> num;
	vector<int>v;
	int len = 0;
	long long min = 0;
	for (long long x = num; x > 0; x /= 10){
		len++;
		v.push_back(x % 10);
	}
	reverse(v.begin(), v.end());
	if (!is_Huiwen(v, len) && (abs(num - pow(10, len - 1))>1 || abs(num - pow(10, len))>1)){
		int length = len-1;
		int i = 0;
		while (i < length){
			v[length] = v[i];
			i++;
			length--;
		}
	}
	else{
		if (abs(num - pow(10, len)) <= 1 || abs(num - pow(10, len-1)) <= 1){
			if (num == pow(10, len ) - 1){
				min = num + 2;
			}
			else{
				min = num-2;
			}
		}
		else{
			if (len % 2 == 0&&v[len/2]!=0){
				v[len / 2] -= 1;
				v[len / 2 - 1] -= 1;
			}
			else if (len % 2 == 0 && v[len / 2] == 0){
				v[len / 2] += 1;
				v[len / 2 - 1] += 1;
			}
			else if (len % 2 == 1 && v[len / 2] != 0){
				v[len / 2] -= 1;
			}
			else{
				v[len / 2] += 1;
			}
		}
	}
	if (min == 0){
		for (int i : v){
			cout << i;
		}
		cout << endl;
	}
	else{
		cout << min << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}