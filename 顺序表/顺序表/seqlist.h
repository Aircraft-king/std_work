#pragma once
typedef struct SeqList
{
	DataType *base;
	size_t    capacity;
	size_t    size;
}SeqList;

void SeqListInit(SeqList* psl, size_t capacity);
void SeqListPushBack(SeqList* psl, DataType x);
void SeqListShow(SeqList *psl);
void SeqListPopBack(SeqList* psl);  //βɾ
void SeqListPopFront(SeqList* psl);//ͷɾ
int SeqListFind_pos(SeqList* psl, DataType x);//��λ�ò���
int SeqListFind_val(SeqList* psl, DataType x); //��ֵ����
void SeqListInsert(SeqList* psl, size_t pos, DataType x);//����
void SeqListDelete_val(SeqList* psl,  DataType x); //��ֵɾ��
void SeqListDelete_pos(SeqList* psl, size_t pos); //��ַɾ��
int SeqListLenth(SeqList* psl);//ռ�ó���
void SeqListRemove_All(SeqList* psl);//�������(�����������)
void SeqListReverse(SeqList* psl);//����˳���
void SeqListSort(SeqList* psl);//˳�������
void SeqListClear(SeqList* psl);//���˳���


////////////////////////////////////////////////////////////

void SeqListInit(SeqList* psl, size_t capacity)
{
	psl->base = (DataType*)malloc(sizeof(DataType)*capacity);
	psl->capacity = capacity;
	psl->size = 0;
}

void SeqListPushBack(SeqList* psl, DataType x)
{
	if (psl->size >= psl->capacity)
	{
		printf("˳���ռ�����,%d���ܲ���.\n", x);
		return;
	}
	psl->base[psl->size++] = x;
}

void SeqListPushFront(SeqList* psl, DataType x)
{
	if (psl->size >= psl->capacity)
	{
		printf("˳���ռ�����,%d���ܲ���.\n", x);
		return;
	}

	for (int i = psl->size; i > 0; --i)
	{
		psl->base[i] = psl->base[i - 1];
	}
	psl->base[0] = x;
	psl->size++;
}

void SeqListShow(SeqList *psl)
{
	for (size_t i = 0; i < psl->size; ++i)
	{
		printf("%d ", psl->base[i]);
	}
	printf("\n");
}

void SeqListPopBack(SeqList* psl) {   //βɾ

	psl->size--;

}

void SeqListPopFront(SeqList* psl) {

	for (size_t i = 1; i <= psl->size - 1; ++i) {
		psl->base[i - 1] = psl->base[i];
	}
	psl->size--;
}

int SeqListFind_pos(SeqList* psl, DataType x) {
	 
	if ((DataType)psl->size <= x) {
		return -1;
	 }
     else return psl->base[x];

}

int SeqListFind_val(SeqList* psl, DataType x) { //��ֵ����

	for (size_t i = 0; i < psl->size; ++i) {
		if (x == psl->base[i]) {
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SeqList* psl, size_t pos, DataType x) {//����

	if (pos > psl->size) {
		printf("%dλ�ò���Υ�������ܲ�������\n",pos);
	}
	else {
		for (size_t i = psl->size-1; i >= pos; --i)
		{
			psl->base[i+1] = psl->base[i];
		}
	}
	psl->base[pos] = x;
	psl->size++;
}

void SeqListDelete_val(SeqList* psl, DataType x) { //��ֵɾ��
	int count = 0;
	for (size_t i = 0; i < psl->size-1; i++) {
		if (psl->base[i] == x) {
			for (size_t j = i; j < psl->size - 1;j++) {
				psl->base[j] = psl->base[j+1];
				count++;
			}	
			psl->size--;
			i--;
		}
	}
	if (count == 0) {
		printf("��˳�����û��%d\n", x);
	}
}

void SeqListDelete_pos(SeqList* psl, size_t pos) { //��ַɾ��

	if (pos > psl->size) {
		printf("%dλ��Υ��������ɾ������\n", pos);
	}
	else {
		for (size_t i = pos; i < psl->size; ++i) {
			psl->base[i] = psl->base[i+1];
		}
	}
	psl->size--;
}

int SeqListLenth(SeqList* psl) {//ռ�ó���

	return psl->size;

}

void SeqListRemove_All(SeqList* psl) {//�������(�����������)

	for (size_t i = 0; i < psl->size -1; ++i) {
		if (psl->base[i] % 2 == 1) {
			for (size_t j = i; j < psl->size - 1; j++) {
				psl->base[j] = psl->base[j + 1];
				
			}
			psl->size--;
			i--;
		}
	}
}

void SeqListReverse(SeqList* psl) {//����˳���

	size_t* left = psl->base;
	size_t* right = psl->base + psl->size-1;
	while (left < right) {
		size_t tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void SeqListSort(SeqList* psl) {//˳�������

	for (size_t i = psl->size-1 ; i >0; --i) {
		for (size_t j = 1; j <= i; ++j) {
			int tmp = 0;
			if (psl->base[j-1] > psl->base[j]) {
				tmp = psl->base[j];
				psl->base[j] = psl->base[j-1];
				psl->base[j-1] = tmp;
			}
		}
	}
}

void SeqListClear(SeqList* psl) {
	while (psl->size) {
		psl->size--;
	}
}