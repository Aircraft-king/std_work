#define _CRT_SECURE_NO_WARNINGS 1
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

#include<stdio.h>
#include<stdlib.h>
int fib_seq1(int a) {
	if (a<=2) {
		return 1;
	}
	else {
		return (fib_seq1(a - 1) + fib_seq1(a - 2));
	}
	
}
int fib_seq2(int a) {
	int n1 = 1;
    int n2 = 1;
	int temp = 0;
	int i = 0;
	if (a <= 2) {
		return 1;
	}
	else {
		for (i = 3; i <= a; i++) {
			temp = n1 + n2;
			n1 = n2;
			n2 = temp;
		}
		return temp;
	} 
}
int main() {
	int a = 0;
	int n = 0;
	scanf("%d", &a);
	n = fib_seq1(a);
	printf("�ݹ鷽����%d\n", n);
	n = fib_seq2(a);
	printf("�ǵݹ鷽����%d\n", n);
	system("pause");
	return 0;
}





//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��

int my_pow(int n,int k) {
	
	if (k == 0)

	{

		return 0;

	}

	else if (k == 1)

	{

		return n;

	}
	else
		return n * my_pow(n, k-1);
	
}
int main() {
	int n = 0;
	int k = 0;
	int a = 0;
	printf("�����������");
	scanf("%d", &n);
	printf("������ָ����");
	scanf("%d", &k);
	a = my_pow(n, k);
	printf("%d",a);
	system("pause");
	return 0;
}



//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

int digit_sum(size_t a) {
	int sum = 0;
	int m = 0;
	if(a != 0) {
		m = a % 10;
		a = a / 10;
	    sum = digit_sum(a)+m;
	}
	return sum;
}
int main() {
	size_t a = 0;
	int b = 0;
	scanf("%d", &a);
	b = digit_sum(a);
	printf("%d", b);
	system("pause");
	return 0;
}

//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

void reverse_string(char* arr) {

	if(*arr != '\0') {
		arr++;
		reverse_string(arr);
		printf("%c", *(arr-1));
	}
}
int main() {
	char arr[20] ="abcdefghighijk";
	reverse_string(arr);
	system("pause");
	return 0;
}
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//
//�ݹ�
int my_strlen1(char arr[]) {
	int count = 0;
	if (*arr != '\0') 
	count = 1+my_strlen1(arr+1);
	else {
		return 0;
	}
	return count;

}
int my_strlen2(char arr[]) {
	int i = 0;
	while (*arr != '\0') {
		arr++;
		i++;
	}
	return i;
}
int main() {
	char arr[9] = "abcdef";
	printf("%d\n",my_strlen1(arr));
	printf("%d",my_strlen2(arr));
	system("pause");
	return 0;
}
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

int fact(int n) {
	if (n == 1) {
		return 1;
	}
	else
	return n * fact(n - 1);
}
int fact1(int n) {
	int sum = 1;
	int i = 0;
	for (i = 1; i<=n; i++) {
		sum *= i;	
	}
	return sum;
}
int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d\n",fact(n));
	printf("%d",fact1(n));
	system("pause");
	return 0;

}

//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
void print(int n) {
	if (n > 9) {
		print(n / 10);	
	 }
	printf("%d ",n % 10);
}
int main() {
	int num = 0;
	scanf("%d", &num);
	print(num);
	system("pause");
	return 0;
}