#pragma once

#include <stdlib.h>
#include <assert.h>

// ����Ľ��
typedef struct Node {
	int value;
	struct Node *next;
}	Node;

// ��ʼ���������һ��������һ����㶼û�е�����
void SListInit(Node **ppFirst) {
	*ppFirst = NULL;
}

void SListDestroy(Node *first) {
	Node *next;
	for (Node *cur = first; cur != NULL; cur = next) {
		next = cur->next;
		free(cur);
	}
}

// O(1)
void SListPushFront(Node **ppFirst, int v) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;

	node->next = *ppFirst;
	*ppFirst = node;
}

// O(1)
void SListPopFront(Node **ppFirst) {
	assert(*ppFirst != NULL);	// һ����㶼û�У�û������ɾ��
	Node *next = (*ppFirst)->next;
	free(*ppFirst);
	*ppFirst = next;
}

// O(n)
void SListPushBack(Node **ppFirst, int v) {
	if (*ppFirst == NULL) {
		Node *node = (Node *)malloc(sizeof(Node));
		node->value = v;

		node->next = *ppFirst;
		*ppFirst = node;
		return;
	}

	// �����һ����㣬����������������һ�����
	Node *cur = *ppFirst;
	while (cur->next != NULL) {
		cur = cur->next;
	}

	// cur �������һ�����
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;

	// ��ԭ�������һ������ next = �µĽ��
	cur->next = node;
}



static Node * BuyNode(int v) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;

	return node;
}

void PushBack(Node **ppFirst, int v) {
	// �����¿ռ�
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;	// node ���µ����һ����㣬���� next = NULL

	if (*ppFirst == NULL) {
		// ������һ����㶼û��
		*ppFirst = node;
		return;
	}

	// �������һ�����
	// ���һ������ next һ�� == NULL
	Node *cur;
	// �����ã�����Ҫ�����Ƿ�����Ч�ռ�
	// *ptr | ptr->member
	cur = *ppFirst;
	while (cur->next != NULL) {
		cur = cur->next;
	}
	// ����ѭ������ζ�� cur->next == NULL
	// cur �������һ�����

	cur->next = node;
}

// O(n)
void SListPopBack(Node **ppFirst) {
	assert(*ppFirst != NULL);
	if ((*ppFirst)->next == NULL) {
		free(*ppFirst);
		*ppFirst = NULL;
		return;
	}

	// �ҵ������ڶ������
	// cur->next->next == NULL ͣ����
	Node *cur = *ppFirst;
	while (cur->next->next != NULL) {
		cur = cur->next;
	}

	// �ͷ����һ�����
	free(cur->next);
	cur->next = NULL;
}

Node * SListFind( Node *first, int v) {
	for (Node *cur = first; cur != NULL; cur = cur->next) {
		if (cur->value == v) {
			return cur;
		}
	}

	return NULL;
}

// pos �϶��������еĽ��
void SListInsertAfter(Node *pos, int v) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = pos->next;
	pos->next = node;
}


// pos �϶��������еĽ��
void SListEraseAfter(Node *pos) {
	Node *next = pos->next;
	pos->next = pos->next->next;
	free(next);
}

void Test() {
	Node *first;
	SListInit(&first);

	SListPushFront(&first, 1);
	// 1 -> NULL
	SListPushFront(&first, 2);
	// 2 -> 1 -> NULL
	SListPushFront(&first, 3);
	// 3 -> 2 -> 1 -> NULL
	SListPushFront(&first, 4);
	// 4 -> 3 -> 2 -> 1 -> NULL

	SListPushBack(&first, 10);
	SListPushBack(&first, 20);
	SListPushBack(&first, 30);
	SListPushBack(&first, 40);

	// 4 3 2 1 10 20 30 40

	SListPopBack(&first);
	SListPopBack(&first);
	SListPopBack(&first);
	// 4 3 2 1 10
	SListPopFront(&first);
	SListPopFront(&first);
	SListPopFront(&first);
	// 1 10
	SListPopBack(&first);
	SListPopBack(&first);
	// first == NULL
}