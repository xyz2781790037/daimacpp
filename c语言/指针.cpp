#include<stdio.h>
//int* add();
//void maxminadd(int arr[], int len, int* max, int* min);
//int add(int num1, int num2, int* add);
//int* add();
//void swep(void* a, void* b, int len);

//int main()
//{
	//ָ������������ڴ��ַ�ı����������ʽ ָ��=�ڴ��ַ
//��������(Ҫ��ָ����������ͱ���һ��)  ����(�Լ��������)
// * ���
	//ָ�����ã��������� 
	//��ʽ��*ָ���� *p��*�ǽ����������
//ָ�������
//����1:�������������еı���
//����2:�������ض��ֵ
//����3:�����Ľ���ͼ���״̬�ֿ�
//����4:����Ĳ�������ͺ���
//ָ���ʹ��ϸ��
//01	ָ�����������	
//02	ָ���������������Ҫ��ָ����������ͱ���һ��	
//03	ָ�����ռ�õĴ�С�������������޹أ����������й�	,����ʲô���͵�ָ�룬�����ڴ���ָ�����
//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�32λ:4�ֽ�	64λ:8�ֽ�
//04	��ָ�������ֵ��ʱ�򣬲��ܰ�һ����ֵ��ֵ��ָ�����
//eg:int a = 10; int* p = 100;(���)&a��ֵ�ѷ�����ڴ��ַ
	/*int a = 10;
	int* p = &a;
	printf("%d\n", *p);
	char b = 'c';
	char* p1 = &b;
	long long c = 100;
	long long* p2 = &c;
	printf("%zu\n", sizeof(p1));
	printf("%zu\n", sizeof(p2));*/
//ָ�������һϸ��
//�����б������������ڸ�������أ����������ˣ�����Ҳ����ʧ��ʱ�����������У����޷�ͨ��ָ��ʹ����
//������뺯���еı��������գ������ڱ���ǰ���static�ؼ���
	/*int* p = add();
	printf("%d\n", *p);*/
	//ָ�����������͵����ã���ȡ�ֽڵĸ���
	//�������� * p = �ڴ��ַ
	//û�����͵�ָ�룺�޷���ȡ���ݣ��޷����㣬�����Խ��������ַ��
	//void * p;����ʾ�κ�����

	/*int arr[] = { 1,2,3,4,5,6,7,8 };
	int len = sizeof(arr) / sizeof(int);
	int max = arr[0];
	int min = arr[0];
	maxminadd(arr,len, &max, &min);
	printf("%d\n", max);
	printf("%d\n", min);*///����2

	//����һ���������������������ȡ����//����3
	/*int a = 11;
	int b = 3;
	int res = 0;
	int end = add(a, b,&res);
	if (end == 0)
	{
		printf("%d", res);
	}*/
	//ָ������ ������ָ���ƶ�һ�Σ����˶����ֽ�
	//char 1 short 2 int 4 long 4 long long 8
	//�ӷ���ָ�������ƶ���p+1;
	//������ָ����ǰ�ƶ���p+1;
	/*int a = 10;
	int* p = &a;
	printf("%p\n", p);
	printf("%p\n", p - 1);
	printf("%p\n", p + 1);*/
//ָ������������Ĳ���:
//ָ����������мӡ�������(ÿ���ƶ�һ������)	
//ָ���ָ����м�����(�������)
//ָ������������Ĳ���:
//ָ����������г˳�����
//ָ���ָ����мӡ��ˡ�������
//ǰ������:��֤�ڴ�ռ���������
	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int* p1 = &arr[0];
	printf("%d\n", *p1);
	printf("%d\n", *(p1+1));
	int* p2 = &arr[6];
	printf("%d\n", p2 - p1);
	printf("%p\n", p1);
	printf("%p\n", p2);*/
//Ұָ��:ָ��ָ��Ŀռ�δ����
	/*int a = 10;
	int* p = &a;
	printf("%d\n", *p);
	printf("%p\n", p);
	int* p2 = p + 10;
	printf("%d\n", *p2);
	printf("%p\n", p2);*/
//����ָ��:ָ��ָ��Ŀռ��ѷ��䣬���Ǳ��ͷ���
	/*int* p4 = add();
	printf("asdfghjkl;");
	printf("%d\n", *p4);
	printf("%p\n", p4);*/
	//int a = 10;
	//short b = 20;
	//int* p = &a;
	//short* p1 = &b;
	//char* p2 = (char*)p;
	//��ͬ���͵�ָ��֮�䲻�ܸ�ֵ
	//void* p2 = p;
	//void* p3 = p1;
// void���͵�ָ���������Ĺ���	
// voidû���κ����ͣ��ô����Խ�����������ָ���¼���ڴ��ַ
// ȱ��: void���͵�ָ�룬�޷���ȡ������������ݣ�Ҳ���ܽ��мӡ����ļ���
//int a = 100;
//int b = 200;
//swep(&a, &b, 4);
//printf("%d\n", a);
//printf("%d\n", b);

//	return 0;
//}
//int* add()
//{
//	static int a = 10;
//	return &a;
//}
//void maxminadd(int arr[], int len, int* max,int* min)
//{
//	*max = arr[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] > *max)
//		{
//			*max = arr[i];
//		}
//	}
//	*min = arr[0];
//	for (int j = 0; j < len; j++)
//	{
//		if (arr[j] < *min)
//		{
//			*min = arr[j];
//		}
//	}
//}
//int add(int num1,int num2,int *res)
//{
//	if (num2 == 0)
//	{
//		return 1;
//	}
//	
//	*res = num1 % num2;
//		return 0;
//}
//int* add()
//{
//	int num = 30;
//	int* p3 = &num;
//	return p3;
//}
//����:������������������¼������	
//�޸�һ�º�����������ͨ����
//void swep(void* a, void* b, int len)
//{
//	char* pc1 = (char*)a;
// // ��void���͵�ָ�룬ת��char���͵�ָ��
//	char* pc2 = (char*)b;
//	int temp = 0;
//	for (int i = 0; i < len; i++)
//	{
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//		pc1++;
//		pc2++;
//	}
//���ֽ�Ϊ��λ��һ���ֽ�һ���ֽڵĽ��н���
//}