#include <iostream>
#include <map>
using namespace std;
int main(){
	int size = 0;
	cin >> size;
	multimap<int, int>m;
	for (int i = 0; i < size; i++){
		int num = 0;
		cin >> num;
		m.insert(std::pair< int, int >(num, 1));
	}
	for (map<int,int>::iterator it = m.begin(); it != m.end(); it++){
		int s = m.count(it->first);
		if (s>m.size() / 2 + 1){
			cout << it->first << endl;
			break;
		}
	}


	system("pause");
	return EXIT_SUCCESS;
}