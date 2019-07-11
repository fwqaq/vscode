#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	vector<int> v;
	int maxw, a;
	int num = 0;
	int curW = 0;
	while (cin >> a){
		v.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	cin >> maxw;
	sort(v.begin(), v.end());
	for (int i = 0; i<v.size(); i++){
		curW += v[i];
		if (curW == maxw){
			num++;
			curW = 0;
		}
		else if (curW>maxw){
			num++;
			curW = v[i];
		}
	}
	if (curW > 0)
		num++;
	cout << num << endl;

	system("pause");
	return EXIT_SUCCESS;

}