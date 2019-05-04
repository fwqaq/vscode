#include <iostream>
#include <vector>
using namespace std;

int main(){
	int start, end, price;
	while (cin >> start >> end >> price){
		vector<int> prices(10000);
		for (int i = start; i <= end; i++){
			prices[i] = price;
		}
		int min = start;
		int max = end;
		while (cin >> start >> end >> price){
			if (start<min)
				min = start;
			if (end>max)
				max = end;
			for (int i = start; i <= end; i++)
				prices[i] = price;
		}

		cout << "[" << min << "," << " ";
		for (int i = min + 1; i <= max; i++){
			if (prices[i - 1] != prices[i]){
				if (prices[i - 1] != 0){
					cout << i - 1 << "," << " " << prices[i - 1] << "]";
				}
				if (i < max&&prices[i] != 0){
					cout << "," << "[" << i << "," << " ";
				}
			}
		}
		cout << max << "," << " " << prices[max] << "]" << endl;
	}
	return 0;
}