#include <queue>
using namespace std;

class MyStack {
public:
	queue<int>que;
	queue<int>temp;
	/** Initialize your data structure here. */
	MyStack() {

	}

	/** Push element x onto stack. */
	void push(int x) {
		if (que.empty())
			temp.push(x);
		else{
			que.push(x);
		}
	}
	int pop() {
		int top;
		if (que.empty()){
			while (temp.size() - 1){
				que.push(temp.front());
				temp.pop();
			}
			top = temp.front();
			temp.pop();
		}
		else if (temp.empty){
			while (que.size() - 1){
				temp.push(que.front());
				que.pop();
			}
			top = que.front();
			que.pop();
		}
		return top;
	}

	/** Get the top element. */
	int top() {
		int top;
		if (que.empty()){
			while (temp.size() - 1){
				que.push(temp.front());
				temp.pop();
			}
			top = temp.front();
			que.push(top);
		}
		else if (temp.empty()){
			while (que.size() - 1){
				temp.push(que.front());
				que.pop();
			}
			top = que.front();
			temp.push(top);
			que.pop();
		}
		return top;
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return que.empty() && temp.empty();
	}
};
