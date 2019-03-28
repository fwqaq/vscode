#include <iostream>
#include <set>
using namespace std;
int main(){
	int x = 0;
	cin >> x;
	set<int>s;
	set<int>s1;
	for (int i = 0; i < x; i++){
		int num = 0;
		cin >> num;
		s.insert(num);
		if (i>0){
			s1.insert(num);
		}
	}
	int max = 0;
	set<int>::iterator it1 = s1.begin();
	for (set<int>::iterator it = s.begin(); it != s.end()&&it1!=s1.end(); it++){
		if ((*it1 - *it) > max){
			max = (*it1 - *it);
		}
		it1++;
	}
	cout << max << endl;
	system("pause");
	return EXIT_SUCCESS;
}