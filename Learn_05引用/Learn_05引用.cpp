// Learn_05引用.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

//值传递
void MySwap01(int a, int b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

//地址传递
void MySwap02(int* a, int* b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

//引用传递
void MySwap03(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

//引用作函数的返回值
	//1.不要反悔局部变量的引用
	//2.函数的调用可以作为左值

int& Test01() {
	static int a = 10;
	return a;
}

//常量引用：用来修饰形参，防止误操作



int main()
{
	int& ref2 = Test01();
	cout << ref2 << endl;
	Test01() = 1000;
	cout << ref2 << endl;

}

