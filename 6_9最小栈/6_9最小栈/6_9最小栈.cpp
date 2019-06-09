#include <iostream>
#include <stack>
using std::endl;
using std::cout;
class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		_elem.push(x);
		if (_min.empty() || x <= _min.top()){
			_min.push(x);
		}
	}

	void pop() {
		if (_min.top() == _elem.top()){
			_min.pop();
		}
		_elem.pop();
	}

	int top() {
		return _elem.top();
	}

	int getMin() {
		return _min.top();
	}
private:
	std::stack<int>_elem;
	std::stack<int>_min;
};
int main(){

	MinStack s;
	s.push(2);
	s.push(1);
	cout << s.getMin() << endl;
	system("pause");
	return EXIT_SUCCESS;
}