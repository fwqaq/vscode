#include <iostream>
using namespace std;
int n,K, A, B;
int x = 0;
int sum = 1;
int a[51], book[51],b[51],aa[51];
int GetGCD(int a, int b){
	return (a%b == 0) ? b : GetGCD(b, a%b);
}
void dfs(int step){
	int i = 0;
	if (step == K + 1){
		for (i = 1; i <= K; i++){
			cout << a[i] << " ";
			sum *= a[i];
		}
		cout<<endl;
		//sum 和 A 的最大公约数5 2 12 6	//	4 4 1 2 
		if (GetGCD(sum, A) >= B){
			x++;
		}
		sum = 1;
		return;
	}
	for (i = 1; i <= n; i++){
		if (book[i] == 0){
			a[step] = b[i];
			book[i] = 1;
			dfs(step + 1);
			book[i] = 0;
		}
	}
	return;
}

int main(){
	cin >> n >> K >> A >> B;
	for (int i = 1; i <= n; i++){
		cin >> b[i];
	}
	dfs(1);
	int su = 1;
	for (int i = 1; i <= K; i++){
		su *= i;
	}
	cout << x / su<< endl;
	system("pause");
	return EXIT_SUCCESS;
}