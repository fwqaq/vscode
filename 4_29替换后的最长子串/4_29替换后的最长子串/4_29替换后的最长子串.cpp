#include<iostream>
#include<string>
using namespace std;
const int maxn = 50040;
void longstr(string str, int k)  //�����������к��� 
{
	int len = str.length();
	int arraya[maxn] = { 0 };      //�ַ���������Ԫ��'a'���±���ɵ����� 
	int arrayb[maxn] = { 0 };      //�ַ���������Ԫ��'b'���±���ɵ����� 
	int J = 1;                   //������ 
	int K = 1;
	int maxa = 0;                //��¼��󳤶� 
	int maxb = 0;
	for (int i = 0; i < len; i++)     //�����ַ���������Ŀ������ 
	{
		if (str[i] == 'a')
		{
			arraya[J++] = i + 1;
		}
		if (str[i] == 'b')
		{
			arrayb[K++] = i + 1;
		}
	}
	arraya[J] = len;           //�����ĩԪ�� 
	arrayb[K] = len;
	arraya[0] = 1;
	arrayb[0] = 1;
	int temp1, temp2;         //��¼ÿһ�������������ַ������� 
	for (int i = 1; i <= J - k; i++)
	{
		if (i == 1 || i == J - k)     //���Ҫ��ת���ַ��ڵ�һ���������һ�� 
		{
			temp1 = arraya[i + k] - arraya[i - 1];  //����Ҫ��ȥ1 
		}
		else
		{
			temp1 = arraya[i + k] - arraya[i - 1] - 1;  //������Ҫ��ȥ1 
		}
		if (temp1 > maxa)
		{
			maxa = temp1;           //�����ֵ���� 
		}
	}
	for (int i = 1; i <= K - k; i++)
	{
		if (i == 1 || i == K - k)
		{
			temp2 = arrayb[i + k] - arrayb[i - 1];
		}
		else
		{
			temp2 = arrayb[i + k] - arrayb[i - 1] - 1;
		}
		if (temp2 > maxb)
		{
			maxb = temp2;
		}
	}
	int a = (maxa > maxb) ? maxa : maxb;   //�ҳ���תa��b��������� 
	cout << a << endl;

}
int main()
{
	string str;
	int n, m;
	while (cin >> n >> m)
	{
		cin >> str;
		int len = str.length();
		longstr(str, m);
	}
}