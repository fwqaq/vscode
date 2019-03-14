#include <iostream>
using namespace std;
#include <vector>
void getRet(vector<int>& v1,vector<int>& v2){
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
		int a1 = 1;
		int a2 = 2;
		int sum = 0;
			if (*it == 1){
				sum = 1;	
			}
			if (*it == 2){
				sum = 2;
			}
			if (*it > 2){
				for (int i = 0; i < *it - 2; i++){
					sum = (2 * a2 + a1) % 32767;
					a1 = a2 % 32767;
					a2 = sum % 32767;
				}
			}
			
		
			v2.push_back(sum);
	}
}
int main(){
	int n = 0;
	vector<int>v1;//存放输入的值
	vector<int>v2;//存放输出的值
	cin >> n;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v1.push_back(num);
	}
	getRet(v1, v2);
	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++){
		cout << *it << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}