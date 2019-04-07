#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int get_min_mul(int a, int b) //求两个数的最小公倍数
{
	int bigger, smaller, tmp;

	(a > b) ? (bigger = a, smaller = b) : (bigger = b, smaller = a);
	while (smaller != 0)
	{
		tmp = bigger % smaller;
		bigger = smaller;
		smaller = tmp;
	}
	return (a * b / bigger);
}
int main(){
	vector<int>v;
	int arr[5];
	for (int i = 0; i < 5; i++){
		cin >> arr[i];
	}
	for (int i = 0; i < 5 - 1; i++){
		for (int j = i+1; j < 5; j++){
			int x = get_min_mul(arr[i], arr[j]);
			v.push_back(x);
		}
	}
	int min = 100 * 99 * 88;
	//找出v中的最小的数能够整数两个数的
	for (int i = 0; i < v.size() - 1; i++){
		for (int j = i + 1; j < v.size(); j++){
			int x = get_min_mul(v[i], v[j]);
			if (x < min){
				min = x;
			}
		}
	}
	cout << min << endl;
	system("pause");
	return EXIT_SUCCESS;
}