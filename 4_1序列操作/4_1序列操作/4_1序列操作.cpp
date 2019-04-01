#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main(){
	int n;
	int m;
	cin >> n;
	int *p = new int[n]{1};
	list<int>v;
	cin >> m;
	for (int i = 0; i < m; i++){
		int num = 0;
		cin >> num;
		if (p[num - 1] == 0){
			v.remove(num);
			v.push_back(num);
		}
		else{
			v.push_back(num);
		}
		p[num - 1] = 0;
	}
	v.reverse();
	for (list<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << endl;
	}
	for (int i = 0; i < n; i++){
		if (p[i] != 0){
			cout << (i + 1 )<< endl;
		}
	}
	delete[]p;
	system("pause");
	return EXIT_SUCCESS;
}