#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	printf("bite");
//		return 0;
//}
////ctrl +f5����
////һ�����̿��Զ��.c�ļ�����ֻ����һ��������

////�洢��ĸ��a��
//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	float weight = 55.5;
//	double d = 0.0;
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	printf("bite\n");
//	printf("%d\n",100); //��ӡһ������--%d\n
//	printf("%d\n", sizeof(char)); //sizeof-�ؼ���-������-�������ͻ��߱�����ռ�ռ�Ĵ�С
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
//	//����һ������
//	//���� ����������=0;
//	int age = 20;
//	double weight = 70.0;
//	age = age + 1;
//	weight = weight + 2;
//	printf(" % d\n", age); //%d��ӡ����
//	printf("%lf\n", weight);
//	return 0;
//}


////ȫ�ֱ���--{}�ⲿ����
//int a = 100;
//
//int main()
//{
//	//�ֲ�����{}�ڲ�����
//	//�ֲ�������ȫ�ֱ�����ͻ������£��ֲ�����
//	//������ȫ�ֱ����;ֲ�����һ��
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//�����������ĺ�
//scanf���������뺯��
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", & a, &b);//& ���ݴ�ŵ�a����
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}
//ʹ�ò���ȫ��scanf������#define _CRT_SECURE_NO_WARNINGS 1 ���ڵ�һ��

