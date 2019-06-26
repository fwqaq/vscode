#include <iostream>
#include <vector>
using namespace std;

typedef struct{
	int hour;
	int minuter;
}nnclock;

int main(){
	int N, i, t, ti;
	cin >> N;
	vector<nnclock> clocks(N);
	for (i = 0; i < N; i++){
		cin >> clocks[i].hour >> clocks[i].minuter;
	}
	int X = 0;
	cin >> X;
	nnclock startClass;
	cin >> startClass.hour >> startClass.minuter;
	int startMinuter = startClass.hour * 60 + startClass.minuter;
	int lastGetupMinuter = startMinuter - X;
	int minuters = startMinuter;
	for (i = 0; i < N; i++){
		if ((ti = lastGetupMinuter - clocks[i].hour * 60 - clocks[i].minuter) >= 0){
			if (ti < minuters){
				minuters = ti;
				t = i;
			}
		}
	}

	cout << clocks[t].hour << " " << clocks[t].minuter << endl;
	system("pause");
	return 0;
}