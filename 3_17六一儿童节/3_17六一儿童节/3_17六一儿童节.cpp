#include <iostream>
#include <set>
using namespace std;
/*
��һ�У�n����ʾh����Ԫ�ظ���,��ʾѧ���ĸ���
�ڶ��У�n��h����Ԫ��   ��ʾѧ����̨��Ҫ���ɵ�����
�����У�m����ʾw����Ԫ�ظ���  �ǵ�����
�����У�m��w����Ԫ��   �ǵ�ÿһ�������
*/
int main(){
	int n = 0;
	cin >> n;
	multiset<int> childs;
	for (int i = 0; i < n; i++){
		int num = 0;
		cin >> num;
		childs.insert(num);
	}
	int m = 0;
	cin >> m;
	multiset<int> tang;
	for (int i = 0; i < m; i++){
		int num = 0;
		cin >> num;
		tang.insert(num);
	}
	//����С�Ŀ�ʼ�Ƚϣ��꽺tang�д���childs�е�����
	int num = 0;
	for (multiset<int>::iterator it = childs.begin(), it1 = tang.begin(); it != childs.end() && it1 != tang.end();){
		if ((*it1)>=(*it)){
			num++;
			it++;
			it1++;
			continue;
		}
		if (*it1 < *it){
			it1++;
		}
	}
	cout << num << endl;
	system("pause");
	return 0;
}