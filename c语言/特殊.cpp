//#include<stdio.h>
////#include"***.h"//用头文件写就可以
////#define a 100;
////#define add(x,y) ((x) + (y))
////void han()
////{
////	printf("hhh\n");
////}
////void aa()
////{
////	han();
////}
////int mylen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
////int add(int x, int y);
////int mylen(char* str)
////{
////	if (*str == '\0')
////	{
////		return 0;
////	}str++;
////	return 1 + mylen(str);
////}
//int main(int argc, char* atgv[], char* envp[])//main函数有三个参数
//{
//	/*typedef unsigned int uint;
//	uint a = 10;*///对数据类型重定义
//	///size_t 为一个无符号整数类型
//	//static用来修饰变量和函数
//    //修饰局部变量称为静态局部变量修饰全局变量称为静态全局变量修饰函数称为静态函数,影响了变量的生命周期，生命周期变长和程序的生命周期一样
//	//看函数部分//修饰局部变量时，局部变量除了作用域不销毁
//	//栈区 局部变量  堆区 静态区
//	/*extern a;*///声明外部符号
//	//全局变量是具有外部链接属性的
//	//函数是具有外部链接属性的
//	/*extern int yfuck;
//	printf("%d", yfuck);*/
//	//register建议存放在寄存中
//
//	/*int b = a;
//	printf("%d\n", b);
//	int c = 10;
//	int d = add(c, b);
//	printf("%d", d);*/
//
//	/*char arr[1000];
//	scanf("%s", arr);
//	fgets(arr, 100, stdin);*/////////////字符串的输入！！！！！！
//	
////传值调用	函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
////传址调用 传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
////这种传参方式可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。
//
//	//嵌套调用 看第五行
//	//链式访问在 C 语言中，链式访问主要通过函数返回特定类型的指针来实现连续调用。
//	//printf("%d", printf("%d", printf("%d", 43)));//printf返回打印字符的个数
////本质main函数有参数
//	//%u 无符号整数
//
//	/*char arr[] = "abc";
//	int len = mylen(arr);
//	printf("%d", len);*/
//	return 0;
//}