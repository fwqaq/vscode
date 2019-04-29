#include<iostream>
#include<string>
using namespace std;
const int maxn = 50040;
void longstr(string str, int k)  //输出最长连续序列函数 
{
	int len = str.length();
	int arraya[maxn] = { 0 };      //字符串中所有元素'a'的下标组成的数列 
	int arrayb[maxn] = { 0 };      //字符串中所有元素'b'的下标组成的数列 
	int J = 1;                   //计数符 
	int K = 1;
	int maxa = 0;                //记录最大长度 
	int maxb = 0;
	for (int i = 0; i < len; i++)     //遍历字符串，生成目标数组 
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
	arraya[J] = len;           //添加首末元素 
	arrayb[K] = len;
	arraya[0] = 1;
	arrayb[0] = 1;
	int temp1, temp2;         //记录每一个遍历的连续字符串长度 
	for (int i = 1; i <= J - k; i++)
	{
		if (i == 1 || i == J - k)     //如果要反转的字符在第一个或者最后一个 
		{
			temp1 = arraya[i + k] - arraya[i - 1];  //不需要减去1 
		}
		else
		{
			temp1 = arraya[i + k] - arraya[i - 1] - 1;  //否则需要减去1 
		}
		if (temp1 > maxa)
		{
			maxa = temp1;           //将最大值保存 
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
	int a = (maxa > maxb) ? maxa : maxb;   //找出翻转a和b中最长的序列 
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