#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	printf("bite");
//		return 0;
//}
////ctrl +f5运行
////一个工程可以多个.c文件，但只能有一个主函数

////存储字母‘a’
//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	float weight = 55.5;
//	double d = 0.0;
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	printf("bite\n");
//	printf("%d\n",100); //打印一个整数--%d\n
//	printf("%d\n", sizeof(char)); //sizeof-关键字-操作符-计算类型或者变量所占空间的大小
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//		return 0;
//}

//int main()
//{
//	//创建一个变量
//	//类型 变量的名字=0;
//	int age = 20;
//	double weight = 70.0;
//	age = age + 1;
//	weight = weight + 2;
//	printf(" % d\n", age); //%d打印整型
//	printf("%lf\n", weight);
//	return 0;
//}


////全局变量--{}外部定义
//int a = 100;
//
//int main()
//{
//	//局部变量{}内部定义
//	//局部变量和全局变量冲突的情况下，局部优先
//	//不建议全局变量和局部变量一样
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//求两个整数的和
//scanf函数是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", & a, &b);//& 数据存放到a里面
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}
//使用不安全的scanf函数：#define _CRT_SECURE_NO_WARNINGS 1 放在第一行

