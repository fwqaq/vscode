#include <iostream>
#include <string>
using namespace std;
int main(){
	int num = 0;
	while (cin >> num){
		int count = 0;
		int used = 0;
		for (int i = 0; i < num; i++){
			string str;
			string S;
			cin >> S;
			cin >> str;
			if (str == "connect"){
				if (count == used){
					count++;
					used++;
				}
				else{
					used++;
				}
			}
			else{
				used--;
			}
		}
		cout << count << endl;
	}

	system("pause");
	return EXIT_SUCCESS;
}