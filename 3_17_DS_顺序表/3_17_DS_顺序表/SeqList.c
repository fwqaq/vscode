#include "SeqList.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// 确保容量够用，不需要扩容，什么都不做
// 需要扩容就扩容
// 影响函数的链接属性，从外部链接属性 -> 内部链接属性
// O(n)
static void CheckCapacity(SeqList *ps) {
	if (ps->size < ps->capacity) {
		return;
	}

	// 需要扩容
	int newCapacity = ps->capacity * 2;
	int *newArray = (int *)malloc(sizeof(int)* newCapacity);
	assert(newArray != NULL);

	// 搬家
	for (int i = 0; i < ps->size; i++) {
		newArray[i] = ps->array[i];
	}

	// 释放老空间，绑定新空间
	free(ps->array);
	ps->array = newArray;
	ps->capacity = newCapacity;
}

void SeqListInit(SeqList *ps, int capacity) {
	// ps 期望是变量的地址
	assert(ps != NULL);
	if (ps != NULL);

	ps->array = malloc(sizeof(int)* capacity);
	assert(ps->array != NULL);
	ps->size = 0;
	ps->capacity = capacity;
}


void SeqListDestroy(SeqList *ps) {
	assert(ps != NULL);
	assert(ps->array != NULL);

	// 释放 array 的空间
	free(ps->array);

	// 锦上添花
	ps->array = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

// O(1)
void SeqListPushBack(SeqList *ps, int v) {
	CheckCapacity(ps);
	ps->array[ps->size] = v;
	ps->size++;
}

// O(n)
void SeqListPushFront(SeqList *ps, int v) {
	CheckCapacity(ps);
	// i 代表含义是空间的下标
	for (int i = ps->size; i >= 1; i--) {
		ps->array[i] = ps->array[i - 1];
	}

	ps->array[0] = v;
	ps->size++;
}

// O(n)
void SeqListInsert(SeqList *ps, int pos, int v) {
	CheckCapacity(ps);
	assert(pos >= 0 && pos <= ps->size);
	// pos = 0 就是头插，pos = size 就是尾插

	// i 数据的下标
	for (int i = ps->size - 1; i >= pos; i--) {
		ps->array[i + 1] = ps->array[i];
	}

	ps->array[pos] = v;
	ps->size++;
}

// O(1)
void SeqListPopBack(SeqList *ps) {
	assert(ps->size > 0);
	ps->size--;
}

// O(n)
void SeqListPopFront(SeqList *ps) {
	assert(ps->size > 0);

	for (int i = 0; i <= ps->size - 2; i++) {
		ps->array[i] = ps->array[i + 1];
	}

	ps->size--;
}

// O(n)
void SeqListErase(SeqList *ps, int pos) {
	// [0, size - 1]
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos + 1; i < ps->size; i++) {
		ps->array[i - 1] = ps->array[i];
	}

	ps->size--;
}

int SeqListFind(SeqList *ps, int v) {
	for (int i = 0; i < ps->size; i++) {
		if (ps->array[i] == v) {
			return i;
		}
	}

	return -1;
}

void SeqListModify(SeqList *ps, int pos, int v) {
	assert(pos >= 0 && pos < ps->size);
	ps->array[pos] = v;
}

// O(n)
void SeqListRemove(SeqList *ps, int v) {
	int pos = SeqListFind(ps, v);
	if (pos == -1) {
		return;
	}

	SeqListErase(ps, pos);
}

void SeqListRemoveAll(SeqList *ps, int v) {
	int i, j;
	for (i = 0, j = 0; i < ps->size; i++) {
		if (ps->array[i] != v) {
			ps->array[j] = ps->array[i];
			j++;
		}
	}

	ps->size = j;
}