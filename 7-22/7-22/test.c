#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
//}
//
//int count_one_bits(unsigned int value) {
//	int count = 0;
//	while (value) {
//		if (value % 2 == 1) {
//			count++;
//		}
//		value /= 2;
//	}
//	return count;
//}
//int main() {
//    unsigned int value = 0;
//	scanf("%d", &value);
//	printf("%d��1",count_one_bits(value));
//	system("pause");
//	return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//
//void obtain(int n) {
//	int count = 0;
//	int i = 0;
//	int arr[50] = { 0 };
//	while (n) {
//		arr[i] = n % 2;
//		count++;
//		i++;
//		n /= 2;
//	}
//	printf("ż��λ�ֱ��ǣ�");
//	for (i = 0; i < count; i+=2) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("����λ�ֱ��ǣ�");
//	for (i = 1; i < count; i+=2) {
//		printf("%d ", arr[i]);
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	obtain(n);
//	system("pause");
//	return 0;
//}
//3. ���һ��������ÿһλ��
//
//void print(int a) {
//	if (a > 9) {
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	system("pause");
//	return 0;
//}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
int compare(int n1, int n2) {
	int i = 0;
	int tmp = n1 ^ n2;
	int count = 0;
	while (tmp) {
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main() {


	int n1 = 0;
	int n2 = 0;
	scanf("%d%d", &n1, &n2);
    printf("%d\n",compare(n1, n2));
	system("pause");
	return 0;
}