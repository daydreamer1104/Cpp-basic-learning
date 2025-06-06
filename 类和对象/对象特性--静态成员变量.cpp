﻿#include<iostream>
using namespace std;
class Person
{
public:
	//静态成员变量
	//1.所有对象共享同一份数据
	//2.编译阶段就分配内存
	//3.类内声明，类外初始化操作
	static int a;
	//静态成员变量也是有访问权限的
private:
	static int b;
	};
int Person::a = 100;
int Person::b = 200;	
void test01()
{
	Person p1;
	cout << p1.a << endl;
	Person p2;
	p2.a = 200;
	cout << p1.a << endl;
}
void test02()
{
	//静态成员变量不属于某个对象，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式
	//1.通过对象访问
	Person p;
	cout << p.a << endl;

	//2.通过类名进行访问
	cout << Person::a << endl;
	//cout << Person::b << endl; 私有权限无法访问
}
int main()
{
	//test01();
	test02();
	return 0;
};