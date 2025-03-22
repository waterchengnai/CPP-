// 函数重载


//函数重载概述
//作用 : 函数名可以相同，提高复用性
//函数重载满足条件 :
//同一个作用域下
//函数名称相同
//函数  参数类型不同 或者 个数不同 或者 顺序不同
//不同的只有形参

//注意 : 函数的返回值不可以作为函数重载的条件

//函数重载注意事项
//1、引用作为重载条件
//void func(int& a)
//{
//cout << "func(int &a)调用" << endl;
//}
//void func(const int& a）
//{
//	cout << "func(const int &a)调用" << endl;
//}
////2、函数重载碰到函数默认参数
//void func2(int a, int b = 10)
//{
//cout << "func2(int a,int b=10)调用" << endl;
//}
//void func2(int a)
//{
// cout << "func2(int a)调用”<< endl;
//}

//int main() {
//	int a = 10;
//	func(a);//调用无const
//	func(10);//调用有const
//	//func2(10);//碰到默认参数产生歧义，需要避免
//	system("pause");
//	return 0;
//}