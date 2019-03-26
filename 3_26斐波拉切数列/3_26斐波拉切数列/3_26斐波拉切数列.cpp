#include <iostream>
using namespace std;
int main(){
	int num = 0;
	cin >> num;
	int pre = 0;
	int las_pre = 0;
	int now = 0;
	for (int i = 1; i <= num; i++){
		if (i == 1){
			pre = 1;
			continue;
		}
		if (i == 2){
			las_pre = 1;
			continue;
		}
		now = pre + las_pre;
		pre = las_pre;
		las_pre = now;
	}
	cout << now << endl;
	system("pause");
	return EXIT_SUCCESS;
}