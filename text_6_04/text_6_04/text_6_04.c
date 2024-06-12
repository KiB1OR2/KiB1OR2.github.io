#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	{ int a = 10; }
//	printf("a=%d\n", a);
//
//	return 0;
//}
//程序报错，因为大括号作用域
//局部变量的作用域，就是变量所在的局部范围
//全局变量的作用域：都可以使用（整个工程）
//声明一下变量
//extern int g_val;//声明另一个文件的全局变量

//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//
//
//}

//生命周期
//变量的生命周期，变量的创建和销毁之间的时间段
//局部变量的生命周期:进入局部范围，生命周期开始，出局部范围，生命周期结束
//全局变量的生命周期：程序的生命周期。

//int main()
//{
//	{
//		int a = 10;
//		printf(" % \d\n", a);
//	}
//	return 0;
//
//}

//常量：字面常量
//#define MAX 10000
//int main()
//{
	//9.12;
	//10;
	//'a';


	//const修饰的常变量
	//const int num = 10;//变量
	//num = 20;
	//printf("num=%d\n", num); //20

	//被const修饰的变量变成了常量，不能再改变，程序报错
	//int arr[10] = { 0 };//10个元素
	//const int n = 10;
	//int arr2[n] = { 0 };//n是变量，这里是不行
	////表达式应该含有常量值，输入常量表达式,加入const也不行，因为它是常变量，本质还是个变量
	//return 0;

//3.#define定义的标识符常量
//int n = MAX;
//printf("n = %d\n", n);
//
//return 0;
//}
//不能在后续更改这个常量

//4.枚举常量
//可以一一列举的常量
//enum Sex {
//	//enum 枚举所用函数
//	//这种枚举类型的变量的未来可能取值
//	MALE, //0
//	FEMALE, //1
//	SECRET //2
//	//如果最开始定义MALE = 3； 值会改变为3
//};
//
//
//
//
//
//int main()
//{
//	enum Sex s = MALE;
//
//	printf("%d\n",MALE); //输出0
//	printf("%d\n",FEMALE);//输出1
//	printf("%d\n",SECRET);//输出2
//
//
//	return 0;
//}

//字符串就是一串字符--用双引号括起来的一串字符,字符串的结束标志是\0

int main()
{
	//字符数组--数组是一组相同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符
	//char arr[] = "hello"; //F10调试代码
	char arr1[] = "abc"; //abc\0
	char arr2[] = {'a','b','c','\0'};  //abc 没有\0字符串没有终止,要单独加\0
	//打印字符串%s
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//求字符串长度
	int len = strlen("abc"); //srting length
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2)); //没有\0打印出来将是随机值
	
	return 0;
}