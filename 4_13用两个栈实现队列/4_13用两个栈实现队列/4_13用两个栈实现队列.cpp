#include <iostream>
#include <stack>
using namespace std;
class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}
	int pop() {
		if (stack2.empty()){
			while (!stack1.empty()){
				int ret = stack1.top();
				stack1.pop();
				stack2.push(ret);
			}
		}
		int ret = stack2.top();
		stack2.pop();
		return ret;
	}
private:
	stack<int> stack1;//用来存储数据
	stack<int> stack2;//用来输出数据
};