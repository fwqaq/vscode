#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	while (1){
		int num = 0;
		cin >> num;
		v.push_back(num);
		if (getchar() == '\n'){
			break;
		}
	}
	//相同的数量可以看成相同的，比如说都为3的可以看成循环，但是只能是四个人
	vector<int>ch;
	ch.resize(1000, 0);
	for (int i = 0; i < v.size(); i++){
		ch[v[i]]++;
	}
	int ret = 0;
	for (int i = 0; i < ch.size(); i++){
		if (i == 0){
			ret += ch[0];
			continue;
		}
		//在i的位置上只要是i+1的倍数就可以实现
		if (ch[i] % (i + 1) == 0){
			ret += ch[i];
		}
		else{
			ret += (ch[i] / (i + 1) + 1)*(i + 1);
		}
	}
	cout << ret << endl;
	system("pause");
	return 0;
}