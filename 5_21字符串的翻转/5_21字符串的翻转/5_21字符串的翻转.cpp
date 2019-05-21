#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string str;
	while (getline(cin, str)){
		//ÑùÀı£ºÊäÈëasdjk asadh asdkh---->asdkh  asadh  asdjk
		reverse(str.begin(), str.end());
		int start = 0;
		int end = 0;
		while (end < str.size()+1){
			if (str[end] == ' '||str[end] == '\0'){
				reverse(str.begin() + start, str.begin() + end);
					start = end + 1;
				}
			end++;
			}
		cout << str << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}