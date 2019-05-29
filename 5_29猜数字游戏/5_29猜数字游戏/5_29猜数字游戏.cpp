#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
	string getHint(string secret, string guess) {
		//判断有多少是符合我们的数字的
		int p1[10] = { 0 };
		int p2[10] = { 0 };
		for (int i = 0; i < secret.size(); i++){
			p1[secret[i] - '0']++;
		}
		for (int j = 0; j < guess.size(); j++){
			p2[guess[j] - '0']++;
		}
		int sum = 0;
		for (int i = 0; i < 10; i++){
			if (p1[i] <= p2[i]){
				sum += p1[i];
			}
			else{
				sum += p2[i];
			}
		}
		int sem = 0;
		for (int i = 0; i < secret.size(); i++){
			if (secret[i] == guess[i]){
				sem++;
			}
		}
		string s;
		s = to_string(sem)+"A"+to_string(sum-sem)+"B";
		return s;
	}
};
int main(){
	Solution s;
	cout<<s.getHint("1807", "7810");
	system("pause");
	return EXIT_SUCCESS;
}