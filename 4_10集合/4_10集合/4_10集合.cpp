#include <iostream>
#include <set>
using namespace std;
int main(){
	int m, n;
	cin >> m>> n;
	set<int>s;
	for (int i = 0; i < m + n; i++){
		int num;
		cin >> num;
		s.insert(num);
	}
	int len = s.size();
	int i = 1;
	for (set<int>::iterator it = s.begin(); it != s.end(); it++,i++){
		if (i < len)
			cout << *it << " ";
		else
			cout << *it;
	}
	system("pause");
	return 0;
}