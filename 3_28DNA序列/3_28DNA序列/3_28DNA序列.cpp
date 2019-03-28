#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin >> str;
	int arr[4] = { 0 };
	int end = 0;
	int count = 1;
	while (end < str.length()-1){
		if (str[end] == str[end + 1]){
			count++;
		}
		else{
			if (str[end] == 'A'){
				if (count<arr[0]||arr[0] == 0){//最小长度
					arr[0] = count;
				}
			}
			if (str[end] == 'C'||arr[1] == 0){
				if (count < arr[1]){//最小长度
					arr[1] = count;
				}
			}
			if (str[end] == 'G'||arr[2]==0){
				if (count < arr[2]){//最小长度
					arr[2] = count;
				}
			}
			if (str[end] == 'T'||arr[3] == 0){
				if (count < arr[3]){//最小长度
					arr[3] = count;
				}
			count = 1;
			}
		}
		end++;
	}
	cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << endl;
	system("pause");
	return EXIT_SUCCESS;
}