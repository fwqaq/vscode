#include <iostream>
using namespace std;
struct slist{
	int val;
	slist* next;
};
//�ж��������ǲ����л���
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

//�ҵ�������ڵ�
slist* FindLoopPort(slist* head){
	slist* slow = head, *fast = head;
	while (fast&&fast->next){
		slow = slow->next;
		fast = fast->next;
		if (slow == fast){
			break;
		}
	}
	//��ʱ������
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

//���֪�����ĳ���
//��¼����ײ�㣬�ٴ�����֮����ǳ���
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