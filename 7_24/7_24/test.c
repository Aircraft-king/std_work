#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//进阶版
//unsigned int reverse_bit2(unsigned int value) { 
//	int i = 0;	
//	int sum = 0;	
//	int b = 0;	
//	for (i = 0; i < 32; i++) { 
//		b = ((value >> i) & 1)*pow(2, 31 - i);		
//		sum += b; 
//	}	
//	return sum; 
//}
//费手版
//unsigned int reverse_bit1(unsigned int value) {
//	int arr[32] = { 0 };
//	int i = 0;
//	unsigned int ret = 0;
//	int left = 0;
//	int right = 31;
//	int temp = 0;
//	//初始化数组
//	for (i = 0; i < 32; i++) {
//		arr[i] = 0;
//	}
//	for (i = 31; i > 0; i--) {
//		arr[i] = value % 2;
//		value /= 2;
//	}
//	while (left < right) {
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		right--;
//		left++;
//	}
//	for (i = 0; i < 32; i++) {
//		ret += (arr[i] * pow(2, 31 - i));
//	}
//	return ret;
//}
//  
//int main() {
//	unsigned int value = 0;
//	scanf("%u", &value);
//	printf("%u\n",reverse_bit1(value));
//	printf("%u", reverse_bit2(value));
//	return 0;
//}
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
//int main() {
//	int a = 0;
//    int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + ( b - a ) / 2);
//
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//
//int main() {
//	int arr[9] = {0,0,1,1,2,2,3,3,5};
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < 9; i++) {
//		ret ^= arr[i];
//	}
//	printf("%d",ret);
//}
//4.
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
int my_strlen(char* str) {
	int count = 0;
	while (*str) {
		count++;
		str++;
	}
	return count;
}
void str_reverse(char* start,char* end) {
	while (start < end) {
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
void reverse(char* str) {
	char* left = str;
	char* right = str + my_strlen(str) - 1;
	char* a = str;
	//字符串逆序
	str_reverse(left,right);
	//局部逆序
	while (*a) {
		char* star = a;
		while (*a != ' '&& *a!='\0') {
			a++;
		}
		str_reverse(star, a - 1);
		if (*a==' ') {
			a++;
		}
	}
}
int main() {
	char arr[] = "student a am i";
	reverse(arr);
	printf("%s", arr);
	return 0;
}

