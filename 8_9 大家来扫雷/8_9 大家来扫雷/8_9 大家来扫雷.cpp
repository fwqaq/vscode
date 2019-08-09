#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<vector>
#include<iostream>
#include<map>
#include<queue>
#include<sstream>
#include<algorithm>
using namespace std;
int n, m, x, y;
int dx[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };//8个方向
int dy[8] = { 0, -1, -1, -1, 0, 1, 1, 1 };
struct point{
	int x, y;
};
int main(){
	cin >> n >> m >> x >> y;
	vector<vector<char>>v(n + 1, vector<char>(m + 1));
	vector<point>landmine;
	string s;
	for (int i = 1; i <= n; i++){
		cin >> s;//m长的
		for (int j = 1; j <= m; j++){
			v[i][j] = s[j - 1];
			if (v[i][j] == '*'){
				point tmp;
				tmp.x = i;
				tmp.y = j;
				landmine.push_back(tmp);//landmine存地雷位置
			}
		}
	}//以上得到地雷位置landmine和图v


	if (v[x][y] == '*')
{
		cout << "GG";
		system("pause");
		return 0;
	}

	vector<vector<int>>v1(n + 1, vector<int>(m + 1, 0));
	for (int j = 0; j < landmine.size(); j++){
		for (int i = 0; i < 8; i++){
			int px = landmine[j].x + dx[i];
			int py = landmine[j].y + dy[i];//px,py是地雷周围的八个位置
			if (px >= 1 && px <= n && py >= 1 && py <= m)
				v1[px][py]++;
		}
	}
	v[x][y] = v1[x][y] + '0';//点击的那个位置,

	/*
	for (int i = 1;i <= n;i++)
	{
	for (int j = 1;j <= m;j++)
	cout << v1[i][j];
	cout << endl;
	}
	*/


	//x,y是从1开始的
	if (v1[x][y] != 0){
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++)
				cout << v[i][j];
			cout << endl;
		}
		system("pause");
		return 0;
	}
	//若点开的数字==0
	queue<point>q;//队列里面首先放进点击的位置，之后的拓展，存入值为0的位置
	point first;
	first.x = x;
	first.y = y;
	q.push(first);
	while (q.size()){
		point p = q.front();
		q.pop();
		for (int i = 0; i < 8; i++){
			int px = p.x + dx[i];
			int py = p.y + dy[i];
			if (px >= 1 && px <= n && py >= 1 && py <= m && (v[px][py] == '.' || v[px][py] == '.')){
				//&& (v[px][py] == '.' || v[px][py] == '*')为了表示这个位置还没有被赋值
				v[px][py] = v1[px][py] + '0';
				if (v1[px][py] == 0){//说明还可以拓展，就存入队列q里
				
					point first;
					first.x = px;
					first.y = py;
					q.push(first);
				}
			}
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++)
			cout << v[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}
