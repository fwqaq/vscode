#include <iostream>
#include <string>
#include "MyArray.hpp"
using namespace std;
void printArray(MyArray<int>& array){
	for (int i = 0; i < array.getSize(); i++){
		cout << array[i] << endl;
	}
}
int main(){
	MyArray<int> arr(10);
	for (int i = 0; i < 10; i++){
		arr.push_Back(i + 10);
	}
	printArray(arr);
	system("pause");
	return EXIT_SUCCESS;
}