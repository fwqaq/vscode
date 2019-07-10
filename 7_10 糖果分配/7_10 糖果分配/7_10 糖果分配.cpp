#include <iostream>
#include <algorithm>
using namespace std;

int child[1001];
int tg[1001];
int main(){
	int childNum = 0;
	while (cin >> child[childNum++]){
		if (cin.get() == '\n'){
			break;
		}
	}
	int tgNum = 0;
	while (cin >> tg[tgNum++]){
		if (cin.get() == '\n'){
			break;
		}
	}
	sort(child, child + childNum);
	sort(tg, tg + tgNum);
	int i = 0;
	int j = 0;
	while (i < childNum && j < tgNum){
		if (tg[j] >= child[i]){
			i++;
			j++;
		}
		else{
			j++;
		}
	}
	cout << i << endl;
	system("pause");
	return EXIT_SUCCESS;
}
