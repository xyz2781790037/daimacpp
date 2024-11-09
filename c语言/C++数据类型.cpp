#include<iostream>
using namespace std;

//int main()
//{
	//变量变量名=初始值abc=2
		/*可以多行注释*///变量创建的语法:数据类型变量名=变量初始值
	//常量定义:1 define 宏常量2.const修饰的变量也为常量
	//const int Day=10;
	//cout << "Day = "<< Day << endl;
	/*标志符号只能由字母数字下划线组成，标志符不能是关键字第1个，
	字符必须为字母或下划线，并且区分大小写*/
	//整型:short2 int4 long4 long long8
	//可以利用sizeof求出数据类型占用内存大小//语法:sizeof(数据类型/变量)
	//整形大小比较:short<int<=long< =long long
	/*short num1 = 10;
	cout << num1 << endl;*/
	//例:cout <<"short占用内存空间大小为”<< sizeof(short) << endl;
	//实型(浮点型)变量(表示小数):单精度float 双精度double
	//两者表示范围不同7位15-16位表示默认为6位有效数字
	//科学技术法:2e3=2*10^3
//字符型变量:用于显示单个字符char ch = 'a'
	//注:只能用单引号，单引号内只能有一个字符，且只占一个字节	
/*例:char ca = 'a';
	cout << ca << endl;*/
	//char ca = 'a';	
   //cout << ca << endl;
   //cout << (int)ca << endl;//查看字符a对应的ASCII码,可以直接用ASCII给字符型变量赋值	
   //a-97 A-65
   //字符串型:1.C风格字符串char 变量名[]="内容"
   //char sdf[]= "12334"; 
   //cout << sdf << endl;
   //2.C++风格字符串string 变量名=“内容”
   /*string str2 = "12334";
   cout << str2 << endl;*/
   //布尔类型bool(代表真或假的值,占内存空间为1)true本质为1 false本质为0
   /*bool zyx = false;
   cout << zyx << endl;
   cout << "bool所占内存空间为"<< sizeof(bool) << endl;*/
   //数据的输入:从键盘中获取数据cin cin>>变量
   /*int abc = 10;
   cout<<"请给整型变量赋值:"<<endl;
   cin >> abc;
   cout << "abc = " << abc << endl;*/
   //string abc = "100";
   //cout <<"请给字符型变量赋值:"<< endl;
   //cin >> abc;
   //cout << "abc =" << abc << endl;
   /*bool abc = true;
   cout <<"请给布尔型变量赋值:"<< endl;
   cin >> abc;//赋值不为0输出都为1
   cout << "abc =" << abc << endl;*/

//	system("pause");
//	return 0;
//}