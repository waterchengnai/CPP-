#include<iostream>
using namespace std;

//���õı��� ����һ��ָ�볣��
//����һ����ʼ���󣬾Ͳ����Է����ı�

//����:c++�Ƽ�ʹ������,��Ϊ�����ҽ����ò����ɱ�����ִ��

//���������ã�ת��Ϊ int*const ref=&a;
void func(int& ref) {
	ref = 100;//ref�����ã�ת��Ϊ*ref=100
}
int main() {
	int a = 10;
	//�Զ�ת��Ϊ int*const ref =&a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	int& ref = a;
	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ:*ref=20;
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
	func(a);
	cout << "a:" << a << endl;
	return 0;
}