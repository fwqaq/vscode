#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	string t;
	while (cin >> s >> t){
		int ret = 0;
		int post = 0;
		while ((post = s.find(t, post)) != -1){
			post += t.size();
			ret++;
		}
		cout << ret << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}