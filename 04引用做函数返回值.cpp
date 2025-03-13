#include<iostream>
using namespace std;

//引用做函数返回值的注意事项：
//1.不要用局部变量的引用做返回值
int& test01()
{
	int a = 10;
	return a;
}

//2.函数的调用可以作为左值
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
	////按道理这里a的内存应该释放了，但是vs太牛逼了，直接全保留了，写几个打印都不行

	int &ref = test02();
	cout << ref << endl;	//10
	cout << ref << endl;	//10
	
	//这里就是函数的调用做了左值,实质上是返回的别名被赋值为1000,而ref也是a的别名,所以他得知也被改变了
	test02() = 1000;

	cout << ref << endl;	//1000
	cout << ref << endl;	//1000
	system("pause");
}