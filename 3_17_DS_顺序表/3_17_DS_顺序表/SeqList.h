#pragma once

/*
// ��̬˳���
// ˳�������������ھ�̬ʱ��ȷ���������ڼ䣬������д����
typedef struct SeqList {
int array[100];	// ������ 100
int size;		// ˳���ʵ�ʴ洢�����ݸ���
}	SeqList;
*/

// ��̬˳���
// �����ڶ�̬ʱ��ȷ��������ʱ�ڣ�
typedef struct SeqList {
	int *array;
	int capacity;	// ����
	int size;		// 1. ��Ч���ݵĸ���
	// 2. β��ʱ������λ�õ��±�
}	SeqList;

// ��ʼ��
void SeqListInit(SeqList *ps, int capacity);

// ����
void SeqListDestroy(SeqList *ps);

// �� / ɾ / �� /��
// β��
void SeqListPushBack(SeqList *ps, int v);
// ͷ��
void SeqListPushFront(SeqList *ps, int v);
// ���� pos �±�������
void SeqListInsert(SeqList *ps, int pos, int v);

// βɾ
void SeqListPopBack(SeqList *ps);
// ͷɾ
void SeqListPopFront(SeqList *ps);
// ���� pos �±���ɾ��
void SeqListErase(SeqList *ps, int pos);

// ����
int SeqListFind(SeqList *ps, int v);

// ����
void SeqListModify(SeqList *ps, int pos, int v);

// ɾ����һ�������� v
void SeqListRemove(SeqList *ps, int v);
// ɾ������������ v
void SeqListRemoveAll(SeqList *ps, int v);