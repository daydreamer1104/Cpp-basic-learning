#include <iostream>
#include <string>
using namespace std;
//打印数据函数
void showValue(const int& val)
{
	//val = 1000; //防止误操作，加入const修饰形参防止修改数据 
	cout << "val= " << val;
}
int main()
{
	//常量引用
	//使用场景，用来修饰形参，防止误操作
	//int a = 10;
	//int& ref = 10; //引用必须引一块合法的内存空间
	//加上const之后 编译器将代码修改 int temp =10;const int & ref=temp;
	//const int& ref = 10;
	//ref = 20; //加入const之后变为只读，不可修改
	int a = 100;
	showValue(a);
	return 0;
}