//引用基本语法

//数据类型 &别名 = 原名
#include<iostream>
using namespace std;
//int main()
//{
//    int a = 10;
//    int &b = a;
//    cout << "a= " << a << endl; //10
//    cout << "b= " << b << endl; //10
//
//    b = 100;
//    cout << "a= " << a << endl; //100
//    cout << "b= " << b << endl; //100
//
//    int c = 20;
//    b = c;//这里并非更改别名的对象，而是对b赋值
//    cout << "a= " << a << endl; //20
//    cout << "b= " << b << endl; //20
//
//    system("pause");
//
//    return 0;
//}

//注意事项
//1.引用不许初始化
//        int &b=; 这样不初始化的定义是错误的
//2.引用一旦初始化，就不可以更改为别人的别名





//引用做函数参数
void mySwap(int& a, int& b)
//这里的a,b是下面传来的实参的别名,只是别名恰好一样,修改别名就是修改本身,所以实参会改变
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    mySwap(a, b);
    cout << a << endl;       //20
    cout << b << endl;       //10
}
