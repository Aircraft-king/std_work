#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
//		//�ֲ���ת
//    	rot(str,sz);
//	}
//}
//int main() {
//	char s1[10] = "ABCD";
//    int sz = 0;
//	int a = 0 ;
//	sz = strlen(s1);
//	printf("������Ҫ���������ַ�\n");
//		scanf("%d", &a);
//		str_rot(s1,a,sz);
//		printf("%s", s1);
//		return 0;
//}
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

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
		//�ֲ���ת
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
		printf("����");
	}
	else
		printf("��");
	return 0;
}