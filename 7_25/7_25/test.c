#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
//void i_reverse(int* arr,int sz) {
//	int* left = arr;
//	int* right = arr + sz - 1;
//	int  tmp = 0;
//	while (left < right) {
//		if (*left % 2 == 0) {
//			tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//		if (*left % 2 != 0) {
//			left++;
//		}
//		if (*right%2 == 0) {
//			right--;
//		}
//	}
//}
//int main() {
//	int arr[8] = { 1 ,2,3,4,5,6,7,8 };
//	int i=0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	i_reverse(arr,sz);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
int find(int arr[3][3], int key) {
	int i = 0;
	int j = 2;
	while (i < 3 && j >= 0)
	{
		if (key == arr[i][j])
		{
			return 1;
		}
		else if (key > arr[i][j])
		{
			i++;
		}
		else if (key < arr[i][j])
		{
			j--;
		}
	}
	return 0;
}
int main() {
	int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
	int key = 0;
	int a = 0;
	printf("�����������ҵ�����>");
	scanf("%d", &key);
	a = find(arr, key);
	if (a == 0) {
		printf("��������û�����\n");
	}
	if (a == 1) {
		printf("���������������\n");
	}
	return 0;
}
