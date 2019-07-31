#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		int a = 0;
		int b = 0;
		int pos = str.find(",");
		a = atoi(str.substr(0, pos).c_str());
		b = atoi(str.substr(pos + 1).c_str());
		queue<int>q;
		q.push(a);
		int flag = 1;
		int count = 0;
		while (flag){
			int k = q.size();
			for (int i = 0; i < k; i++){
				int num = q.front();
				q.pop();
				if (num == b){//此时就是找到了
					flag = 0;
					break;
				}
				//将此结果插入到我们队列中
				q.push(num + 1);
				q.push(num - 1);
				q.push(num * 2);
			}
			count++;//将次数加上
		}
		//总次数是需要减去1，
		cout << count-1 << endl;

	}


	system("pause");
	return EXIT_SUCCESS;
}