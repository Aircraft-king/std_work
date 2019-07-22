#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
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
//	printf("%d个1",count_one_bits(value));
//	system("pause");
//	return 0;
//}

//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
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
//	printf("偶数位分别是：");
//	for (i = 0; i < count; i+=2) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("奇数位分别是：");
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
//3. 输出一个整数的每一位。
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
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
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