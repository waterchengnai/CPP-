#include<iostream>
using namespace std;

//引用的本质 就是一个指针常量
//引用一旦初始化后，就不可以发生改变

//结论:c++推荐使用引用,因为方便且解引用操作由编译器执行

//发现是引用，转换为 int*const ref=&a;
void func(int& ref) {
	ref = 100;//ref是引用，转换为*ref=100
}
int main() {
	int a = 10;
	//自动转换为 int*const ref =&a;指针常量是指针指向不可改，也说明为什么引用不可更改
	int& ref = a;
	ref = 20;//内部发现ref是引用，自动帮我们转换为:*ref=20;
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;
	func(a);
	cout << "a:" << a << endl;
	return 0;
}