#include <iostream>
using namespace std;
#include <set>
int main(){
	set<int>s;
	int n;
	int k;
	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		s.insert(num);
	}
	int sum = 0;
	for (set<int>::iterator it = s.begin(); sum < k; it++,sum++){
		cout << *it << ",";
	}
	system("pause");
	return EXIT_SUCCESS;
}