#define _CRT_SECURE_NO_WARNINGS 1
//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 15; i+=2) {
//		for (j =(15 - i)/2; j > 0; j--) {
//			printf(" ");
//		}
//		for (j = 0; j < i; j++) {
//			printf("*");
//		}
//
//		printf("\n");
//	}
//	for (i = 11; i > 0; i -= 2) {
//		for (j = (15 - i) / 2; j > 0; j--) {
//			printf(" ");
//		}
//		for (j = i; j>0; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//
//}
#include<stdio.h>
#include<stdlib.h>
//int main() {
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (i = 0; i < 1000; i++) {
//		a = i % 10;
//	    b = i / 10 % 10;
//	    c = i / 100;
//		if (i == a * a * a + b * b * b + c * c * c)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//
//	return 0;
//}
int main() {

	int a = 0;
	int sn = 0;
	scanf("%d", &a);
	sn = a * 5 + 10 * a * 4 + 100 * a * 3 + 1000 * a * 2 + 10000 * a;
	printf("%d\n", sn);
	system("pause");

	return 0;
}








