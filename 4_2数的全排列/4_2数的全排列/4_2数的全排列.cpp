#include <iostream>
using namespace std;
int a[10], book[10], n;
void dfs(int step){
	int i;
	if (step == n + 1){
		for (i = 1; i <= n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	for (int i = 1; i <= n; i++){
		if (book[i] == 0){
			a[step] = i;
			book[i] = 1;
			dfs(step + 1);
			book[i] = 0;//���ղŷ���������л���
		}
	}
	return;

}
int main(){
	cin >> n;
	dfs(1);
	system("pause");
	return EXIT_SUCCESS;
}