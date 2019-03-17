#include "SeqList.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// ȷ���������ã�����Ҫ���ݣ�ʲô������
// ��Ҫ���ݾ�����
// Ӱ�캯�����������ԣ����ⲿ�������� -> �ڲ���������
// O(n)
static void CheckCapacity(SeqList *ps) {
	if (ps->size < ps->capacity) {
		return;
	}

	// ��Ҫ����
	int newCapacity = ps->capacity * 2;
	int *newArray = (int *)malloc(sizeof(int)* newCapacity);
	assert(newArray != NULL);

	// ���
	for (int i = 0; i < ps->size; i++) {
		newArray[i] = ps->array[i];
	}

	// �ͷ��Ͽռ䣬���¿ռ�
	free(ps->array);
	ps->array = newArray;
	ps->capacity = newCapacity;
}

void SeqListInit(SeqList *ps, int capacity) {
	// ps �����Ǳ����ĵ�ַ
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

	// �ͷ� array �Ŀռ�
	free(ps->array);

	// ������
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
	// i �������ǿռ���±�
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
	// pos = 0 ����ͷ�壬pos = size ����β��

	// i ���ݵ��±�
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