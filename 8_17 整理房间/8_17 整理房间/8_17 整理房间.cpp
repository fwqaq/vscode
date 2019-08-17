#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

struct Point
{
	int x;
	int y;
};
void fun(Point *p1, Point *p2)
{
	p2[0] = p1[0];
	p2[1].x = p1[1].x + p1[1].y - p1[0].y;
	p2[1].y = p1[1].y + p1[0].x - p1[1].x;
	p2[2].x = 2 * p1[1].x - p1[0].x;
	p2[2].y = 2 * p1[1].y - p1[0].y;
	p2[3].x = p1[1].x + p1[0].y - p1[1].y;
	p2[3].y = p1[1].x + p1[1].y - p1[0].x;
	//cout << p2[0].x << ',' << p2[0].y << endl;

}

bool Compare(Point p1, Point p2)
{
	if (p1.x == p2.x)
		return p1.y < p2.y;
	return p1.x < p2.x;
}

bool fun1(Point p1, Point p2, Point p3, Point p4)
{
	Point arr[4];
	arr[0] = p1;
	arr[1] = p2;
	arr[2] = p3;
	arr[3] = p4;
	sort(arr, arr + 4, Compare);
	int a1 = (arr[0].x - arr[1].x)*(arr[0].x - arr[1].x) + (arr[0].y - arr[1].y)*(arr[0].y - arr[1].y);
	int a2 = (arr[0].x - arr[2].x)*(arr[0].x - arr[2].x) + (arr[0].y - arr[2].y)*(arr[0].y - arr[2].y);
	int a3 = (arr[3].x - arr[1].x)*(arr[3].x - arr[1].x) + (arr[3].y - arr[1].y)*(arr[3].y - arr[1].y);
	int a4 = (arr[3].x - arr[2].x)*(arr[3].x - arr[2].x) + (arr[3].y - arr[2].y)*(arr[3].y - arr[2].y);
	int b = (arr[1].x - arr[0].x)*(arr[2].x - arr[0].x) + (arr[1].y - arr[0].y)*(arr[2].y - arr[0].y);
	//cout << a1 << ',' << a2 << ',' << a3 << ',' << a4 << endl;
	if (a1 == a2&&a1 == a3&&a1 == a4&&b == 0 && a1 != 0)return true;
	else
	{
		return false;
	}
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		Point arr1[2];
		Point arr2[2];
		Point arr3[2];
		Point arr4[2];
		cin >> arr1[0].x >> arr1[0].y >> arr1[1].x >> arr1[1].y;
		cin >> arr2[0].x >> arr2[0].y >> arr2[1].x >> arr2[1].y;
		cin >> arr3[0].x >> arr3[0].y >> arr3[1].x >> arr3[1].y;
		cin >> arr4[0].x >> arr4[0].y >> arr4[1].x >> arr4[1].y;

		Point tran1[4];
		fun(arr1, tran1);
		Point tran2[4];
		fun(arr2, tran2);
		Point tran3[4];
		fun(arr3, tran3);
		Point tran4[4];
		fun(arr4, tran4);

		vector<int>vec;
		vector<int>::iterator it;
		for (int i1 = 0; i1 < 4; i1++)
		{
			for (int i2 = 0; i2 < 4; i2++)
			{
				for (int i3 = 0; i3 < 4; i3++)
				{
					for (int i4 = 0; i4 < 4; i4++)
					{

						if (fun1(tran1[i1], tran2[i2], tran3[i3], tran4[i4]))
						{

							//cout << i1 << ',' << i2 << ',' << i3 << ',' << i4 << endl;
							vec.push_back(i1 + i2 + i3 + i4);
						}
					}
				}
			}
		}
		if (vec.empty())cout << -1 << endl;
		else {
			it = min_element(vec.begin(), vec.end());
			cout << *it << endl;
		}

	}
}