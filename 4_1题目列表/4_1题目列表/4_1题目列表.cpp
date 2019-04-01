#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	map<string, int>m;
	for (int i = 0; i < num; i++){
		string name;
		cin >> name;
		double X = 0;
		double Y = 0;
		cin >> X >> Y;
		int hard = 0;
		if (Y / X >= 0 && Y / X <= 0.3){
			hard = 5;
		}
		else if (Y / X > 0.3 && Y / X < 0.6){
			hard = 4;
		}
		else if (Y / X >= 0.6 && Y / X <= 1){
			hard = 3;
		}
		m.insert(make_pair(name, hard));
	}
	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
	system("pause");

	return EXIT_SUCCESS;
}