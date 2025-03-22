// 类和对象


//C++面向对象的三大特性为:
//封装、继承、多态
//C++认为万事万物都皆为对象
//对象上有其属性和行为
//例如 :
//人可以作为对象，属性有姓名、年龄、身高、体重....行为有走、跑、跳、吃饭、唱歌...
//车也可以作为对象，属性有轮胎、方向盘、车灯…, 行为有载人、放音乐、放空调....
//具有相同性质的对象，我们可以抽象称为类，人属于人类，车属于车类


//1 封装
//1.1 封装的意义
//封装是C++面向对象三大特性之一
//封装的意义 :
//将属性和行为作为一个整体，表现生活中的事物
//将属性和行为加以权限控制
//封装意义一 :
//在设计类的时候，属性和行为写在一起，表现事物(将变量和函数联系在一起)
//语法 :
//class 类名 { 访问权限: 属性 / 行为 };

//示例1 : 设计一个圆类，求圆的周长
//示例代码 :
#include<iostream>
#include<string>
using namespace std;
//园周率
const double PI = 3.14;
//1、封装的意义
//将属性和行为作为一个整体，
//用来表现生活中的事物
//封装一个圆类，求圆的周长
//class代表设计一个类，后面跟着的是类名

class Circle {
public: //访问权限 公共的权限

	//属性
	int m_r;//半径

	//行为 一般用函数表示
	//获取到圆的周长
	double calculateZC()
	{	//2*pi *r
		//获取圆的周长
		return 2 * PI * m_r;
	}
};
//int main() {
//	//通过圆类，创建圆的对象
//	//c1就是一个具体的圆
//	Circle c1;
//	c1.m_r = 10;//给圆对象的半径 进行赋值操作
//	//2*pi*10==62.8
//	cout << "圆的周长为:"<<c1.calculateZC()<<endl;
//		system("pause");
//	return 0;
//}

//专业术语:
//在一些地方,属性和行为也有一下称呼
 
//类中的属性和行为 我们统一称为 成员
//属性 成员属性 成员变量
//行为 成员函数 成员方法


//作业:创建一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class student {
public:
	//属性
	string name;
	string number;

	//遍历
	void ergo()
	{
		cout <<"姓名:" << name << endl;
		cout << "学号:" << number << endl;
	}
	//函数给属性赋值
	void set(string Name,string Number)
	{
		name = Name;
		number=Number;
	}
};

int main()
{
	student std;
	//1.直接赋值
	std.name = "zhangsan";
	std.number = "15256";
	std.ergo();
	//2.函数赋值
	std.set("lisi","15648");
	std.ergo();

}