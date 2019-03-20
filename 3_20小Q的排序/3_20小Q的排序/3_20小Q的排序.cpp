#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){

	/*1、 将当前序列中前n - 1个数排为升序
		2、 将当前序列中后n - 1个数排为升序
		4 3 1 6 2 5   123465 123456
		小Q可以任意次使用上述两种操作，小Q现在想考考你最少需要几次上述操作可以让序列变为升序。*/
	int n = 0;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		v.push_back(num);
	}
	int sum = 0;
	//判断是不是有序的
	int flag = 0;
	for (int i = 0; i < n - 1; i++){
		if (v[i]>v[i + 1]){
			flag = 1;//无序
			break;
		}
	}
	while (flag){
			//第一次先进行前n-1个数字的排序
			sort(v.begin(), v.end() - 1);
			sum++;
			if (v[n - 1] >= v[n - 2]){//当最后一个大于倒数第二个的时候就满足了条件
				break;
			}
			//不满足的时候我们需要对后面的n-1进行排序
			sort(v.begin() + 1, v.end());
			sum++;
			if (v[1] >= v[0]){
				break;
			}
	}
	cout << sum << endl;
		system("pause");
		return EXIT_SUCCESS;
}