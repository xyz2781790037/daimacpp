#include<stdio.h>
//int* add();
//void maxminadd(int arr[], int len, int* max, int* min);
//int add(int num1, int num2, int* add);
//int* add();
//void swep(void* a, void* b, int len);

//int main()
//{
	//指针变量（储存内存地址的变量）定义格式 指针=内存地址
//数据类型(要跟指向变量的类型保持一致)  变量(自己起的名字)
// * 标记
	//指针作用：储存数据 
	//格式：*指针名 *p中*是解引用运算符
//指针的作用
//作用1:操作其他函数中的变量
//作用2:函数返回多个值
//作用3:函数的结果和计算状态分开
//作用4:方便的操作数组和函数
//指针的使用细节
//01	指针变量的名字	
//02	指针变量的数据类型要跟指向变量的类型保持一致	
//03	指针变量占用的大小，跟数据类型无关，跟编译器有关	,不管什么类型的指针，都是在创建指针变量
//指针变量的大小取决于一个地址存放的时候需要多大空间32位:4字节	64位:8字节
//04	给指针变量赋值的时候，不能把一个数值赋值给指针变量
//eg:int a = 10; int* p = 100;(错的)&a赋值已分配的内存地址
	/*int a = 10;
	int* p = &a;
	printf("%d\n", *p);
	char b = 'c';
	char* p1 = &b;
	long long c = 100;
	long long* p2 = &c;
	printf("%zu\n", sizeof(p1));
	printf("%zu\n", sizeof(p2));*/
//指针的作用一细节
//函数中变量的生命周期跟函数相关，函数结束了，变量也会消失此时在其他函数中，就无法通过指针使用了
//如果不想函数中的变量被回收，可以在变量前面加static关键字
	/*int* p = add();
	printf("%d\n", *p);*/
	//指针中数据类型的作用：获取字节的个数
	//数据类型 * p = 内存地址
	//没有类型的指针：无法获取数据，无法计算，但可以接收任意地址。
	//void * p;不表示任何类型

	/*int arr[] = { 1,2,3,4,5,6,7,8 };
	int len = sizeof(arr) / sizeof(int);
	int max = arr[0];
	int min = arr[0];
	maxminadd(arr,len, &max, &min);
	printf("%d\n", max);
	printf("%d\n", min);*///作用2

	//定义一个函数，将两数相除，获取余数//作用3
	/*int a = 11;
	int b = 3;
	int res = 0;
	int end = add(a, b,&res);
	if (end == 0)
	{
		printf("%d", res);
	}*/
	//指针运算 步长：指针移动一次，走了多少字节
	//char 1 short 2 int 4 long 4 long long 8
	//加法：指针往后移动了p+1;
	//减法：指针往前移动了p+1;
	/*int a = 10;
	int* p = &a;
	printf("%p\n", p);
	printf("%p\n", p - 1);
	printf("%p\n", p + 1);*/
//指针运算有意义的操作:
//指针跟整数进行加、减操作(每次移动一个步长)	
//指针跟指针进行减操作(间隔步长)
//指针运算无意义的操作:
//指针跟整数进行乘除操作
//指针跟指针进行加、乘、除操作
//前提条件:保证内存空间是连续的
	/*int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int* p1 = &arr[0];
	printf("%d\n", *p1);
	printf("%d\n", *(p1+1));
	int* p2 = &arr[6];
	printf("%d\n", p2 - p1);
	printf("%p\n", p1);
	printf("%p\n", p2);*/
//野指针:指针指向的空间未分配
	/*int a = 10;
	int* p = &a;
	printf("%d\n", *p);
	printf("%p\n", p);
	int* p2 = p + 10;
	printf("%d\n", *p2);
	printf("%p\n", p2);*/
//悬空指针:指针指向的空间已分配，但是被释放了
	/*int* p4 = add();
	printf("asdfghjkl;");
	printf("%d\n", *p4);
	printf("%p\n", p4);*/
	//int a = 10;
	//short b = 20;
	//int* p = &a;
	//short* p1 = &b;
	//char* p2 = (char*)p;
	//不同类型的指针之间不能赋值
	//void* p2 = p;
	//void* p3 = p1;
// void类型的指针打破上面的观念	
// void没有任何类型，好处可以接受任意类型指针记录的内存地址
// 缺点: void类型的指针，无法获取变量里面的数据，也不能进行加、减的计算
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
//函数:用来交换两个变量记录的数据	
//修改一下函数，更具有通用性
//void swep(void* a, void* b, int len)
//{
//	char* pc1 = (char*)a;
// // 把void类型的指针，转成char类型的指针
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
//以字节为单位，一个字节一个字节的进行交换
//}