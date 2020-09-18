// Learn_08_类和对象2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Person {
public:
	Person(int age) {
		this->_age = age;
	}

	int GetAge() {
		return _age;
	}
private:
	int _age;

};

void Test01() {
	Person p(20);
	cout << "size of p: " << sizeof(p) << endl;  // 1, 空对象占用1个字节 
	// c++ 编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置。
	//每个空对象有一个独一无二的内存地址。
}

// this 指针
void Test02() {
	Person p1(18);
	cout << "p1 的年龄为：" << p1.GetAge() << endl;
}

// 空指针访问成员函数

class Person2 {

public :
	void ShowClassName() {
		cout << "this is person class" << endl;
	}

	void ShowPersonAge() {

		if (this == NULL) {
			return;
		}
		cout << "age = " << _age << endl;
	}

	int _age;

};

void Test03() {
	Person2* p = NULL;

	p->ShowClassName();
	p -> ShowPersonAge();

}


// cosnt 修饰成员函数
void Test04() {
}

int main()
{
	Test03();
}


// 
