#include<iostream>
using namespace std;

//int main()
//{
	//选择结构 单行if语句
	/*int score = 0;
	cout <<"请输入你的分数:" << endl;

	cin >> score;
	cout <<"您输入的分数为:"<< score << endl;
	if (score > 475)//if条件后不能加“;”
	{
	cout <<"恭喜您考上一本" << endl;
	}
	*/
	//选择结构 多行if语句
		/*int score = 0;
		cout << "请输入你的分数:" << endl;
		cin >> score;
		cout << "您输入的分数为:"<< score << endl;
		if (score >= 475)//if条件后不能加“;“
		{
		 cout << "恭喜您考上一本" << endl;
		}

		else if (score > 390)
		{
		 cout << "恭喜考上二本大学" << endl;
		}
		{
			cout << "您未考上大学" << endl;
		}*/
		//嵌套if语句
		/*int score = 0;
		cout << "请输入你的分数:" << endl;
		cin >> score;
		cout << "您输入的分数为:" << score << endl;
		if (score >= 475)
		{
		   cout << "恭喜您考上一本" << endl;


		if (score > 680)
		{
			cout << "你无敌了" << endl;//原视频显示要{}，22版可以正常运行
		}
		else if (score > 600)
		{
			cout << "你是天才"<< endl;
		}
		else
		{
			cout << "还能更强"<< endl;
		}
		}


		else if (score > 390)
		{
			cout << "恭喜考上二本大学" << endl;
		}

		else
		{
			cout << "您未考上大学" << endl;
		}*/
		//三目运算符:表达式1?表达式2:表达式3
		//三目运算符:表达式1?表达式2:表达式3	
		//如果表达是1的值为真，执行表达式2并返回表达式2的结果;	
		//如果表达式1的值为假，执行表达式3并返还表达式3的结果;
		/*int a = 1;
		int b = 2;
		int c = 0;
		c = (a < b ? a : b);
		cout << "c =" << c << endl;
		//C++中三目运算符返回的是变量，可以进行赋值
		(a > b ? a : b) = 10;
		cout << "a=" << a << endl; cout << "b=" << b << endl;*/
		//switch语句
		/*cout << "请给本节目打分:" << endl;
		int score = 0;
		cin >> score;
		cout <<"你打的分数为:"<< score << endl;
		switch (score)
		{
		case 10:
		cout <<"你认为非常棒!!!"<< endl;
		break;
		case 9:
		cout <<"你认为非常棒" << endl;
		break;
		case 8:
		cout << "你认为棒" << endl;
		break;
		case 7:
			cout << "你认为不错"<< endl;
		break;
		case 6:
			cout << "你认为还行"<< endl;
		break;
		default:
			cout << "你认为差劲" << endl;
			break;
		}*/
		//switch缺点，判断时候只能是整形或者字符型，不可以是一个区间//switch优点结构清晰，执行效率高*/
		//循环结构 while循环语句
		//while(循环条件){循环语句}只要循环条件为真，就执行循环语句
		/*int num = 0;
		while (num < 10)
		{
			cout << num << endl;
			num++;
		}*///注意不要出现死循环
		//do...while循环语句do(循环语句)while(循环条件)
		//do while会先执行一次循环语句，再判断循环条件;
	//int a = 0;
	//do
	//{
	//	cout << a << endl; a++;
	//} while (a < 10);
	//	//for循环语句:满足循环条件，执行循环语句
	//	//for(起始表达式;条件表达式;末尾循环体){循环语句}//起始表达式不参加循环
	//for (int a = 0; a < 10; a++)
	//{
	//	cout << a << endl;
	//}
	//第二钟写法(麻烦!) 
	/*int a = 0; 
	for (; ;)
	{
		if (a > 10)
		{
			break;
		}
			
	cout << a << endl;
    a++;
	}*/
	//嵌套循环:外层/内层循环 外层执行一次，内层执行一周
		/*for (int i = 0; i < 10; i++)
		{
			for (int a = 0; a < 10; a++)
			{
				cout << "*  ";
			}
			cout << endl;
		}*/
		//转跳语句作用:用于跳出选择结构或循环结构
		//出现在switch条件语句中作用是终止case并跳出switch

		//具体见上述switch例子
		//出现在循环语句中，作用是跳出当前的循环语句
//for (int a = 0; a < 10; a++)
//{
//	if (a == 8)
//	{
//		break;
//	}
//	cout << a << endl;
//}
		//出现在嵌套循环中，跳出最近的内层循环语句	
    /*for (int a = 0; a < 10; a++)
    {
	for (int b = 0; b < 10; b++)
	{
		if (b == a)
		{
			break;
		}
		cout << "*";
	}
    cout << endl;
    }*/
//continue语句:在循环语句中跳过本次循环中余下尚未执行的语句继续执行下一循环
//for (int b = 1; b < 101; b ++)
//{
//	if (b % 2 == 0)
//	{
//		continue;//相当于为偶数时，执行下一循环
//	}
//	cout << b << endl;
//}
//goto语句:可以无条件跳转语句goto 标记
//如果标记的名称存在，执行goto语句时会跳转到标记的位置
//cout << "12345" << endl;
//cout << "67890" << endl;
//goto FORG;
//cout << "1" << endl;
//cout << "1235" << endl;
//FORG:
//cout << "125" << endl;
//    system("pause");
//	return 0;
//}