#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//
//void rot(char* str,int sz) {
//	char* left = str;
//	char* right = str + sz - 1;
//	char   tmp = '0';
//	while (left < right) {
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//	}
//}
//void str_rot(char* str, int k,int sz) {
//	int i = 0;
//	for (i = 0; i < k; i++) {
//		//局部旋转
//    	rot(str,sz);
//	}
//}
//int main() {
//	char s1[10] = "ABCD";
//    int sz = 0;
//	int a = 0 ;
//	sz = strlen(s1);
//	printf("请输入要左旋几个字符\n");
//		scanf("%d", &a);
//		str_rot(s1,a,sz);
//		printf("%s", s1);
//		return 0;
//}
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

void rot(char* str, int sz) {
	char* left = str;
	char* right = str + sz - 1;
	char   tmp = '0';
	while (left < right) {
		tmp = *left;
		*left = *right;
		*right = tmp;
		right--;
	}
}
int str_rot(char* str,char* arr,int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		//局部旋转
		rot(str, sz);
		if (strcmp(str,arr) == 0) {
			return 1;
			break;
		}
	}
	return 0;
}
int main() {
	int ret = 0;
	char s1[10] = "AABCD";
	char s2[10] = "BCDAA";
	int sz = 0;
	int a = 0;
	sz = strlen(s1);
	ret=str_rot(s1,s2,sz);

	if (ret == 0) {
		printf("不是");
	}
	else
		printf("是");
	return 0;
}