#include<iostream>
using namespace std;

int main()
{
	//�Ӽ��˳�	
	/*float b = 6;
	float a = 3;
	cout << "a+b=" << a + b << endl;
	cout << a * b << endl;*/
	//ȡģ(ȡ��)10%3=1ȡ����
	/*int a= 10;
	int b = 4;
	cout << a % b << endl;��ĸ���ڷ��ӣ����Ϊ����*/
	//ǰ�õ��� ���ñ���+1��Ȼ����б��ʽ������õ����Ƚ��б��ʽ���㣬���ñ���+1
	//ǰ�õݼ� ���ñ���-1��Ȼ����б��ʽ������õݼ��Ƚ��б��ʽ���㣬���ñ���-1
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
	//��ֵ����� + += -= *= /= %=(Ĥ����)�ӵ���
	//int a=10;	
	//a=100;
	//cout << "a = " << a << endl;
	//a += 2; a = a+2
	//cout << "a = " << a << endl;
	//a -= 3; a =a-3
	//cout << "a = " << a << endl;
	/*a %= 2;
	cout << *a = " << a << endl; a = 0 */
	//�൱��a = a % 2 10/2���������Ϊ0	
	//�Ƚ������:==(�����)!=(������)<><=>=�����ʾΪ����
	/*int a = 10;
	int b = 10;
	cout << (a == b) << endl;
	cout << (a != b) << endl;*/
	//�߼������:! (��) &&(��) ||(��) �������൱��(һ�����)��(һ������)
	//int a=10;
	//cout << !a << endl;//C++�У���0��Ϊ��
    /*int a=100;
    int b = 0;
    cout << (a && b) << endl;*/
    /*int a=100;
    int b =0;
    cout << (a || b) << endl;*/
    /*int a = 0;
    int b=0;
    cout << (a && b) << endl;*/
    //ctrl +k+Uȡ�����ע��
    //ѡ��һ��������Ctrl + r�����Σ�������ȫ���޸�
	system("pause");
	return 0;
}