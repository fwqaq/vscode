#include <iostream>
#include <string>
using namespace std;
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		//ֻҪ���ǵģ��ͣ���ͬ���������ǵģ���������һ��������ǵģ��Ϳ�
		int x = 0;
		int y = 0;
		for (int i = 0; i < n; i++){
			if (A[i] == '('){
				x++;
			}
			else{
				y++;
			}
			if (x < y){
				return false;
			}
		}
		if (x != y){
			return false;
		}
		return true;
	}
};
int main(){
	Parenthesis p;
	cout<<p.chkParenthesis("(()())", 7);
	system("pause");
	return EXIT_SUCCESS;
}