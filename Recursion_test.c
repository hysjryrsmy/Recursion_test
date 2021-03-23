#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//根据下面递归函数：调用函数Fun(2)，返回值是多少
/*
int Fun(int n) //n = 2
{
	if (n == 5)
		return 2;
	else
		return 2 * Fun(n + 1);
}
//返回值是：16
*/


//递归存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后越来越接近这个限制条件
//递归层次太深，会出现栈溢出现象



//乘法口诀表（实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定）输入9就输出9*9口诀表，输出12就输出12*12的乘法口诀表
/*
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}
*/



//字符串逆序（递归实现） ；编写一个函数reverse_string(char*string),将参数字符串中的字符反向排列，不能使用C函数库中的字符串操作函数

/*循环的方法
//#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char arr[])
{
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[] = "abcdef"; //fedcba
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
*/

//递归的方法
/*
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char arr[])
{
	char tmp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	arr[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdef"; //fedcba
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
*/




//计算一个数的每位之和（递归实现）；写一个递归函数DigitSum（n），输入一个非负整数，返回组成他的数字之和
//例如：调用DigitSum(1729),则应该返回1+7+2+9

//DigitSum(1729)
//DigitSum(172)+1729%10
//DigitSum(17)+172%10+1729%10
//DigitSum(1)+17%10+172%10+1729%10
//1+7+2+9
/*
int DigitSum(unsigned int num)
{
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else
		return num;
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);  //1729
	int ret = DigitSum(num);
	printf("ret = %d\n", ret);
	return 0;
}
*/




//递归实现n的k次方：编写一个函数实现n的k次方，使用递归实现
/*
double Pow(int n, int k)
{
	//n^k = n* n^(k-1)
	if (k < 0)
		return (1.0 / Pow(n, -k));
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret = %lf\n", ret);
	return 0;
}
*/