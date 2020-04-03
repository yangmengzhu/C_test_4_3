#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define ROW 9
//#define COL 9
//#define ROWS ROW+2
//#define COLS COL+2
//void menu()
//{
//	printf("*********************\n");
//	printf("****   1. play   ****\n");
//	printf("****   0. exit   ****\n");
//	printf("*********************\n");
//} 
//void game()
//{
//	//存放布置的雷的信息
//	char mine[ROWS][COLS] = { 0 };
//	//存放排查出的雷的信息
//	char show[ROWS][COLS] = { 0 };
//	//初始化
//	InitBoard(mine[ROWS][COLS], ROWS, COLS, '0');
//	InitBoard(show[ROWS][COLS], ROWS, COLS, '*');
//
//}
//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入!\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//写一个函数求两个数的较大值
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &m, &n);
//	int max=Max(m, n);
//	printf("max=%d\n", max);
//	return 0;
//}
//写代码将三个数从大到小输出
//
//写一个代码打印1-100之间所有3的倍数
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int min = (m > n ? n : m);
//	while (1)
//	{
//		if (m%min == 0 && n%min == 0)
//		{
//			break;
//		}
//		min--;
//	}
//	printf("最大公约数为：%d\n", min);
//	return 0;
//}
//函数实现乘法口诀表
//void print_table(int line)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	print_table(line);
//	return 0;
//}
//函数输出1000-2000之间的闰年
//void is_leap_year(int y)
//{
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//}
//int main()
//{
//	int year = 0;
//	is_leap_year(year);
//	return 0;
//}
//函数来交换两个整数的内容
//void change(int m, int n)
//{
//	int tmp = 0;
//	tmp = m;
//	m = n;
//	n = tmp;
//	printf("m=%d n=%d\n", m, n);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	change(m, n);
//	return 0;
//}
//字符串逆序非递归实现  不能使用c函数库中的字符串操作函数
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int len=my_strlen(str);
//	int left = 0;
//	int right = len - 1;
//	while(left < right)
//	{
//		char tmp = 0;
//		tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "hello";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//递归实现字符串逆序  不能使用c函数库中的字符串操作函数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int len = my_strlen(str);
//	char tmp = 0;
//	tmp = str[0];
//	str[0] = str[len - 1];
//	str[len - 1] = '\0';
//	if (my_strlen(str+1)>=2)
//	reverse_string(str + 1);
//	str[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "hello";
//	reverse_string(arr); 
//	printf("%s\n", arr);
//	return 0;
//}
//递归实现打印一个整数的每一位
//void print( int m)
//{
//	if (m > 9)
//		{
//			print(m / 10);
//		}
//		printf("%d ", m % 10);
//}
//int main()
//{
//  int m = 0; 
//	printf("请输入一个整数：>");
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//递归实现求n 的阶乘
//int  Fac(int n)
//{
//	 if (n > 1)
//	 {
//		 return n*Fac(n - 1);
//	 }
//	 else
//		 return n;
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//非递归实现求n 的阶乘
//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//非递归实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret=my_strlen(arr);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//递归实现strlen
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = my_strlen(arr); 
//	printf("ret=%d\n", ret);
//	return 0;
//}
//指针实现strlen (指针-指针=元素个数）
//int my_strlen(char* str)
//{
//	char* star = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - star;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = my_strlen(arr);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//递归实现一个非负整数的的每一位之和
//int Digit_sum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return Digit_sum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int ret=Digit_sum(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//递归实现n的k次方
//double Pow(int n, int k)
//{
//	
//	if (k > 0)
//	{
//		return n*Pow(n, k - 1);
//	}
//	else if (k < 0)
//	{
//		return 1.0 / Pow(n, -k);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret=Pow(n, k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}
//递归实现n的斐波那契数
//int Fib(int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//非递归实现n的斐波那契数
//int Fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//        n--;
//	}
//	return c;
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//输出一个数的二进制序列中1的个数
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int Numberof1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
/*int Numberof1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret=Numberof1(n);
	printf("ret=%d\n", ret);
	return 0*/;
	//}
	//两个整数二进制序列(32位）中不同位的个数
	//int main()
	//{
	//	int m = 0;
	//	int n = 0;
	//	scanf("%d%d", &m, &n);
	//	int tmp = m^n;
	//	int count = 0;
	//	while (tmp)
	//	{
	//		tmp = tmp&(tmp - 1);
	//		count++;
	//	}
	//	printf("count=%d\n", count);
	//}
	//使用指针打印数组内容
	//
	//字符串逆序
	//#include <string.h>
	//void reverse_string(char* str, int len)
	//{
	//	int left = 0;
	//	int right = len - 1;
	//	char tmp = 0;
	//	while (left < right)
	//	{
	//		tmp = str[left];
	//		str[left] = str[right];
	//		str[right] = tmp;
	//		left++;
	//		right--;
	//	}
	//}
	//int main()
	//{
	//	char arr[] = "I am a student";
	//	int len = strlen(arr);
	//	reverse_string(arr, len); 
	//	printf("%s ", arr);
	//	return 0;
	//}
	//int main()
	//{
	//	int i = 0;
	//	int n = 0;
	//	int a = 0;
	//	scanf("%d", &n);
	//	int sum = 0;;
	//	for (i = 0; i < 5;i++)
	//	{
	//		a= a * 10 + n;
	//		sum = sum + a;
	//	}
	//	printf("sum=%d\n", sum);
	//	return 0;
	//}
	//
	//函数判断100-200素数
//#include <math.h>
//int is_prime(int n)
//	{
//		int i = 0;
//		for (i = 2; i <=sqrt(n); i++)
//		{
//			if (n%i == 0)
//				return 0;
//		}
//		return 1;
//	}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//函数实现整型有序数组的二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}
//逆置
//void Init(int arr[], int sz)
//{
//	int i= 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i+1;
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}