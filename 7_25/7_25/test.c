#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
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
	printf("请输入你想找的数：>");
	scanf("%d", &key);
	a = find(arr, key);
	if (a == 0) {
		printf("该数组中没这个数\n");
	}
	if (a == 1) {
		printf("该数组中有这个数\n");
	}
	return 0;
}
