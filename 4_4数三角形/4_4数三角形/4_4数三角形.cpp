#include <iostream>
#include <vector>
using namespace std;
bool is_line(double x1, double  y1, double x2, double y2, double x3, double y3){
	if (x1 == x2){
		return x1 == x3;
	}
	else if (y1 == y2){
		return y1 == y3;
	}
	else{
		return (y2 - y1) / (x2 - x1) == (y3 - y2) / (x3 - x2);
	}
}
int main(){
	int num = 0;
	cin >> num;
	vector<int>x;
	x.resize(num);
	vector<int>y;
	y.resize(num);
	for (int i = 0; i < num; i++){
		cin >> x[i] >> y[i];
	}
	int len = num - 1;
	int len2 = num - 2;
	int count = 0;
	for (int i = 0; i < len2; i++){
		for (int j = i + 1; j < len; j++){
			for (int z = j + 1; z < num; z++){
				if (!is_line(x[i],y[i],x[j],y[j],x[z],y[z])){
					count++;
				}
			}
		}
	}
	cout << count << endl;
		system("pause");
	return EXIT_SUCCESS;
}