#include <iostream>
using namespace std;
struct slist{
	int val;
	slist* next;
};
//判断链表中是不是有环的
bool IsExitsLoop(slist* head){
	slist* slow = head;
	slist* fast = head;
	while (fast&&fast->next){
		slow = slow->next;
		fast->next->next;
		if (slow == fast){
			break;
		}
	}
	if (fast == NULL || fast->next == NULL){
		return false;
	}
	return true;
}

//找到环的入口点
slist* FindLoopPort(slist* head){
	slist* slow = head, *fast = head;
	while (fast&&fast->next){
		slow = slow->next;
		fast = fast->next;
		if (slow == fast){
			break;
		}
	}
	//此时相遇点
	if (fast == NULL || fast->next == NULL){
		return NULL;
	}
	slow = head;
	while (slow != fast){
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}

//如何知道环的长度
//记录下碰撞点，再次碰到之后就是长度
unsigned int GetLoopLength(slist* head){
	slist* slow = head;
	slist* fast = head;
	while (fast&&fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast){
			break;
		}
	}
	if (fast == NULL || fast->next == NULL){
		return 0;
	}
	slist* meet = slow;
	unsigned int len = 1;
	slow = slow->next;
	while (slow != meet){
		len++;
		slow = slow->next;
	}
	return len;
}