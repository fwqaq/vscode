#pragma once

#include <stdlib.h>
#include <assert.h>

// 链表的结点
typedef struct Node {
	int value;
	struct Node *next;
}	Node;

// 初始化链表就是一条空链表，一个结点都没有的链表
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
	assert(*ppFirst != NULL);	// 一个结点都没有，没法进行删除
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

	// 找最后一个结点，隐含链表中至少有一个结点
	Node *cur = *ppFirst;
	while (cur->next != NULL) {
		cur = cur->next;
	}

	// cur 就是最后一个结点
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;

	// 让原来的最后一个结点的 next = 新的结点
	cur->next = node;
}



static Node * BuyNode(int v) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;

	return node;
}

void PushBack(Node **ppFirst, int v) {
	// 申请新空间
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;	// node 是新的最后一个结点，所以 next = NULL

	if (*ppFirst == NULL) {
		// 链表中一个结点都没有
		*ppFirst = node;
		return;
	}

	// 先找最后一个结点
	// 最后一个结点的 next 一定 == NULL
	Node *cur;
	// 不解用，不需要考虑是否是有效空间
	// *ptr | ptr->member
	cur = *ppFirst;
	while (cur->next != NULL) {
		cur = cur->next;
	}
	// 跳出循环，意味着 cur->next == NULL
	// cur 就是最后一个结点

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

	// 找到倒数第二个结点
	// cur->next->next == NULL 停下来
	Node *cur = *ppFirst;
	while (cur->next->next != NULL) {
		cur = cur->next;
	}

	// 释放最后一个结点
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

// pos 肯定是链表中的结点
void SListInsertAfter(Node *pos, int v) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;
	node->next = pos->next;
	pos->next = node;
}


// pos 肯定是链表中的结点
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