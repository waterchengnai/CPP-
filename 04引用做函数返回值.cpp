#include<iostream>
using namespace std;

//��������������ֵ��ע�����
//1.��Ҫ�þֲ�����������������ֵ
int& test01()
{
	int a = 10;
	return a;
}

//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;
	return a;
}

int main()
{
	//int& ref = test01();
	//cout << ref << endl;	//10
	//cout << ref << endl;	//10
	////����������a���ڴ�Ӧ���ͷ��ˣ�����vs̫ţ���ˣ�ֱ��ȫ�����ˣ�д������ӡ������

	int &ref = test02();
	cout << ref << endl;	//10
	cout << ref << endl;	//10
	
	//������Ǻ����ĵ���������ֵ,ʵ�����Ƿ��صı�������ֵΪ1000,��refҲ��a�ı���,��������֪Ҳ���ı���
	test02() = 1000;

	cout << ref << endl;	//1000
	cout << ref << endl;	//1000
	system("pause");
}