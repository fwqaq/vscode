#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool Get_s(vector<int>& v){
	for (int i = 0; i < v.size(); i++){
		set<int>s;//保存走过的路径，如果走过插入的时候返回对组的时候第二个元素是false
		int start = i;
		while (1){
			//cout << s.insert(start).second << "----" << endl;
			if (s.insert(start).second == false){
				break;
			}
			start = start + v[start];//当前的位置、
			if (start < 0 || start >= v.size()){
				return true;
			}
			if (v[start] == 0){
				break;
			}
		}
		s.clear();
	}
	return false;
}
int main(){
	vector<int>v;
	int num = 0;
	while (cin >> num){
		v.push_back(num);
		if (getchar() == '\n'){
			break;
		}
	}
	//得到一个数组，如果走的路线是走过了的就不能走出去，如果每次都不是重复的知道走完所有的路线
	if (Get_s(v)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}

	system("pause");
	return 0;
}