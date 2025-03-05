//常见的其他代码即函数
//system("cls"); 用于清空控制台的文字
//代码区:存放函数体的二进制代码，由操作系统进行管理的
//全局区：存放全局变量和静态变量以及常量
//栈区 : 由编译器自动分配释放，存放函数的参数值，局部变量等
//堆区 : 由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收


//程序运行前
//在程序编译后，生成了exe可执行程序，未执行该程序前分为两个区域
//①代码区 :
//存放 CPU 执行的机器指令,包含两个特点
//代码区共享
//目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
//代码区只读
//使其只读的原因是防止程序意外地修改了它的指令
//②全局区 :
//全局变量和静态变量存放在此.
//全局区还包含了常量区, 字符串常量和其他常量也存放在此.
//该区域的数据在程序结束后由操作系统释放

//#include<iostream>
//using namespace std;
//int g_a = 10;
////const修饰的全局变量
//const int c_s_a = 10;
//int main()
//{
//	//字符串常量
//	cout << "字符串常量的地址" << &("hello world") << endl;
//	//全局变量
//	cout << "全局变量的地址" << &g_a << endl;
//	static int s_a = 10;
//	//静态变量
//	cout << "静态变量的地址" << &s_a << endl;
//
//	//const修饰的局部变量
//	const int c_s_b = 10;
//	cout << "const修饰的局部变量" << &c_s_b << endl;
//	cout << "const修饰的全局变量" << &c_s_a << endl;
//	system("pause");
//
//	return 0;
//
#include<iostream>
using namespace std;

//栈区注意事项:不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放

//栈区包含函数的形参以及函数内定义的局部变量

//int* func()//形参也会再栈区
//{
//	int a = 10;//局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
//	return &a;//返回局部变量的地址
//}
//int main()
//{
//	int* p = func();//接受返回值
//	cout << *p << endl;//10
//	//第一次结果正确是因为电脑有意保留了数据,认为你是失误操作
//	//第二次结果就不对了
//	//按道理是这么说,可是现代编译器太强大了,竟然一直是对的
//	system("pause");
//}

//堆区,是程序员自己开辟的内存
//手动开辟,手动释放,当然操作系统也会释放

//int* func()
//{
//	//利用new,可以再堆区开辟数据
//	int* p = new int(10);
//	//这里p是函数内的局部变量,所以他的地址是在栈区的
//	//但是堆区开辟了一片区域,复制了p的地址,但p还在栈区
//	//可是这下我们就不需要返回p的地址了
//	//直接返回的是堆区的地址
//
//	return p;
//}
//
//int main()
//{
//	int* p = func();
//	cout << *p << endl;
//
//	system("pause");
//}

//1.new的基本语法
int* func()
{
	//堆区创建整形数组
	//new返回的对应数据类型的指针
	//所以p是int类型指针

	int* p=new int(10);
	return p;
}

//2.堆内存释放
//使用关键字delete

void test()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//cout << *p << endl;
}

void test1()
{
	//3.在堆区创建有十个元素的整形数组
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 10;
		cout << arr[i] << endl;
	}
	//4.删除堆内存中的数组
	//注意!是跟释放单独一个数据不同的
	delete[] arr;
	//这里因为arr是连续的数据空间,delete后必须写[]
}

int main()
{
	test();
	test1();
}