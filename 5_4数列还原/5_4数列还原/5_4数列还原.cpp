#include<iostream>
#include<string.h>
#include<vector>
#include<set>
using namespace std;
int coutnum(vector<int> nums)
{
	int num = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] < nums[j])
			{
				num++;
			}
		}
	}
	return num;
}
bool changeturn(vector<int>& nums)
{
	int pos1, pos2, pos3;
	pos1 = nums.size() - 1;
	while (pos1 > 0)
	{
		pos2 = pos1;
		pos1--;
		if (nums[pos1] < nums[pos2])
		{
			for (int i = nums.size() - 1; i >= 0; i--)
			{
				if (nums[i] > nums[pos1])
				{
					pos3 = i;
					break;
				}
			}
			int tp = nums[pos1];
			nums[pos1] = nums[pos3];
			nums[pos3] = tp;
			for (int i = pos2; i < (nums.size() + pos2) / 2; i++)
			{
				tp = nums[i];
				nums[i] = nums[nums.size() - i + pos1];
				nums[nums.size() - i + pos1] = tp;
			}
			return true;
		}
	}
	return false;
}
int main()
{
	int n, k, temp, res = 0;
	cin >> n >> k;
	vector<int> nums = vector<int>(n, 0);
	vector<bool> pos = vector<bool>(n, false);
	set<int> num;
	for (int i = 1; i <= n; i++)
	{
		num.insert(i);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		nums[i] = temp;
		if (temp == 0)
		{
			pos[i] = true;
		}
		else
		{
			num.erase(temp);
		}
	}
	vector<int> p = vector<int>(num.size(), 0);
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (nums[i] == 0)
		{
			p[j++] = i;
		}
	}
	vector<int> array0(num.begin(), num.end());
	do
	{
		for (int i = 0; i < array0.size(); i++)
		{
			nums[p[i]] = array0[i];
		}
		if (coutnum(nums) == k)
		{
			res++;
		}
	} while (changeturn(array0));
	cout << res;
	return 0;
}