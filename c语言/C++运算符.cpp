#include<iostream>
using namespace std;

int main()
{
	//加减乘除	
	/*float b = 6;
	float a = 3;
	cout << "a+b=" << a + b << endl;
	cout << a * b << endl;*/
	//取模(取余)10%3=1取余数
	/*int a= 10;
	int b = 4;
	cout << a % b << endl;分母大于分子，输出为分子*/
	//前置递增 先让变量+1，然后进行表达式运算后置递增先进行表达式运算，再让变量+1
	//前置递减 先让变量-1，然后进行表达式运算后置递减先进行表达式运算，再让变量-1
	int a = 10;
	int b = ++a;// * 10;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	/*intc=10;
	int d = c++ * 10;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;*/
	/*int a = 10;
	int b=a-- * 10;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;*/
	//赋值运算符 + += -= *= /= %=(膜等于)加等于
	//int a=10;	
	//a=100;
	//cout << "a = " << a << endl;
	//a += 2; a = a+2
	//cout << "a = " << a << endl;
	//a -= 3; a =a-3
	//cout << "a = " << a << endl;
	/*a %= 2;
	cout << *a = " << a << endl; a = 0 */
	//相当于a = a % 2 10/2无余数输出为0	
	//比较运算符:==(相等于)!=(不等于)<><=>=结果显示为真或假
	/*int a = 10;
	int b = 10;
	cout << (a == b) << endl;
	cout << (a != b) << endl;*/
	//逻辑运算符:! (非) &&(与) ||(或) 后两者相当于(一假则假)和(一真则真)
	//int a=10;
	//cout << !a << endl;//C++中，除0都为真
    /*int a=100;
    int b = 0;
    cout << (a && b) << endl;*/
    /*int a=100;
    int b =0;
    cout << (a || b) << endl;*/
    /*int a = 0;
    int b=0;
    cout << (a && b) << endl;*/
    //ctrl +k+U取消多层注释
    //选定一个变量，Ctrl + r输两次，将变量全部修改
	system("pause");
	return 0;
}