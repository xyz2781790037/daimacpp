#include<iostream>
using namespace std;

//int main()
//{
	//ѡ��ṹ ����if���
	/*int score = 0;
	cout <<"��������ķ���:" << endl;

	cin >> score;
	cout <<"������ķ���Ϊ:"<< score << endl;
	if (score > 475)//if�������ܼӡ�;��
	{
	cout <<"��ϲ������һ��" << endl;
	}
	*/
	//ѡ��ṹ ����if���
		/*int score = 0;
		cout << "��������ķ���:" << endl;
		cin >> score;
		cout << "������ķ���Ϊ:"<< score << endl;
		if (score >= 475)//if�������ܼӡ�;��
		{
		 cout << "��ϲ������һ��" << endl;
		}

		else if (score > 390)
		{
		 cout << "��ϲ���϶�����ѧ" << endl;
		}
		{
			cout << "��δ���ϴ�ѧ" << endl;
		}*/
		//Ƕ��if���
		/*int score = 0;
		cout << "��������ķ���:" << endl;
		cin >> score;
		cout << "������ķ���Ϊ:" << score << endl;
		if (score >= 475)
		{
		   cout << "��ϲ������һ��" << endl;


		if (score > 680)
		{
			cout << "���޵���" << endl;//ԭ��Ƶ��ʾҪ{}��22�������������
		}
		else if (score > 600)
		{
			cout << "�������"<< endl;
		}
		else
		{
			cout << "���ܸ�ǿ"<< endl;
		}
		}


		else if (score > 390)
		{
			cout << "��ϲ���϶�����ѧ" << endl;
		}

		else
		{
			cout << "��δ���ϴ�ѧ" << endl;
		}*/
		//��Ŀ�����:���ʽ1?���ʽ2:���ʽ3
		//��Ŀ�����:���ʽ1?���ʽ2:���ʽ3	
		//��������1��ֵΪ�棬ִ�б��ʽ2�����ر��ʽ2�Ľ��;	
		//������ʽ1��ֵΪ�٣�ִ�б��ʽ3���������ʽ3�Ľ��;
		/*int a = 1;
		int b = 2;
		int c = 0;
		c = (a < b ? a : b);
		cout << "c =" << c << endl;
		//C++����Ŀ��������ص��Ǳ��������Խ��и�ֵ
		(a > b ? a : b) = 10;
		cout << "a=" << a << endl; cout << "b=" << b << endl;*/
		//switch���
		/*cout << "�������Ŀ���:" << endl;
		int score = 0;
		cin >> score;
		cout <<"���ķ���Ϊ:"<< score << endl;
		switch (score)
		{
		case 10:
		cout <<"����Ϊ�ǳ���!!!"<< endl;
		break;
		case 9:
		cout <<"����Ϊ�ǳ���" << endl;
		break;
		case 8:
		cout << "����Ϊ��" << endl;
		break;
		case 7:
			cout << "����Ϊ����"<< endl;
		break;
		case 6:
			cout << "����Ϊ����"<< endl;
		break;
		default:
			cout << "����Ϊ�" << endl;
			break;
		}*/
		//switchȱ�㣬�ж�ʱ��ֻ�������λ����ַ��ͣ���������һ������//switch�ŵ�ṹ������ִ��Ч�ʸ�*/
		//ѭ���ṹ whileѭ�����
		//while(ѭ������){ѭ�����}ֻҪѭ������Ϊ�棬��ִ��ѭ�����
		/*int num = 0;
		while (num < 10)
		{
			cout << num << endl;
			num++;
		}*///ע�ⲻҪ������ѭ��
		//do...whileѭ�����do(ѭ�����)while(ѭ������)
		//do while����ִ��һ��ѭ����䣬���ж�ѭ������;
	//int a = 0;
	//do
	//{
	//	cout << a << endl; a++;
	//} while (a < 10);
	//	//forѭ�����:����ѭ��������ִ��ѭ�����
	//	//for(��ʼ���ʽ;�������ʽ;ĩβѭ����){ѭ�����}//��ʼ���ʽ���μ�ѭ��
	//for (int a = 0; a < 10; a++)
	//{
	//	cout << a << endl;
	//}
	//�ڶ���д��(�鷳!) 
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
	//Ƕ��ѭ��:���/�ڲ�ѭ�� ���ִ��һ�Σ��ڲ�ִ��һ��
		/*for (int i = 0; i < 10; i++)
		{
			for (int a = 0; a < 10; a++)
			{
				cout << "*  ";
			}
			cout << endl;
		}*/
		//ת���������:��������ѡ��ṹ��ѭ���ṹ
		//������switch�����������������ֹcase������switch

		//���������switch����
		//������ѭ������У�������������ǰ��ѭ�����
//for (int a = 0; a < 10; a++)
//{
//	if (a == 8)
//	{
//		break;
//	}
//	cout << a << endl;
//}
		//������Ƕ��ѭ���У�����������ڲ�ѭ�����	
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
//continue���:��ѭ���������������ѭ����������δִ�е�������ִ����һѭ��
//for (int b = 1; b < 101; b ++)
//{
//	if (b % 2 == 0)
//	{
//		continue;//�൱��Ϊż��ʱ��ִ����һѭ��
//	}
//	cout << b << endl;
//}
//goto���:������������ת���goto ���
//�����ǵ����ƴ��ڣ�ִ��goto���ʱ����ת����ǵ�λ��
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