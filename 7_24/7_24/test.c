#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//���װ�
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
//���ְ�
//unsigned int reverse_bit1(unsigned int value) {
//	int arr[32] = { 0 };
//	int i = 0;
//	unsigned int ret = 0;
//	int left = 0;
//	int right = 31;
//	int temp = 0;
//	//��ʼ������
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
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//
//int main() {
//	int a = 0;
//    int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + ( b - a ) / 2);
//
//}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
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
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
	//�ַ�������
	str_reverse(left,right);
	//�ֲ�����
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

