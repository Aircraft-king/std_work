#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。
//
//

void num_find(int arr[], int sz) {
	int i = 0;
	int j = 0;

	for (i = 0; i < sz; i++) {	
		int a = 0;
		for (j = 0; j < sz; j++) {
			if (arr[i] == arr[j]) {
				a++;
			}
		}
		if (a == 1) {
			printf("%d ",arr[i]);
		}
	}
}
int main() {
	int arr[8] = { 1,1,2,2,3,4,5,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
    num_find(arr, sz);
	system("pause");
	return 0;
}
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

int main() {
	int money = 20;
	int count1 = money;
	int count = 0;
	int bott = count1;
	while (bott >1) {
		count1 += bott/ 2;
		if (bott % 2 == 0) {
			bott /= 2;
		}
		else {
			bott=bott / 2 + 1;
		}
	}
	//规律：喝的数量等于2*money-1；
	count= 2 * money - 1;
	printf("%d\n", count1);
	printf("%d\n", count);
	system("pause");
	return 0;
}
//3.模拟实现strcpy

char* my_strcpy(char* a1, const char* a2) {
	char* ret = a1;
	assert(a1 != NULL);
	assert(a2 != NULL);
	while (*a1++ = *a2++) {
		;
	}
	return ret;
}

int main() {
	char arr1[11] = "\0";
	char arr2[11] = "abcdefghij";
	char* a = my_strcpy(arr1, arr2);
	printf("%s", a);
	system("pause");
	return 0;
}
//4.模拟实现strcat
char* my_strcat(char* s1, char* s2) {
	char* ret = s1;
	while (*s1) {
    *(s1+strlen(s1))=*s2;
	  s1++;
	  s2++;
	}
	return ret;
}
int main() {
	char arr[80] = "hello ";
	char arr1[10] = "air";
	char*a = my_strcat(arr, arr1);
	printf("%s", a);
	system("pause");
	return 0;
}