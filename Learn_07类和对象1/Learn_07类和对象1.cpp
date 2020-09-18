// Learn_07类和对象1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;
class Person {

public:

    Person() {   //无参数构造函数（默认构造）
        age = 18;
        cout << "Person 的构造函数调用" << endl;
    }

    Person(int a) { //有参数的构造函数
        age = a;
        cout << "Person 的有参数构造函数" << endl;
    }

    Person(const Person &p) {  //拷贝构造函数
        age = p.age;
    }


    ~Person() {
        cout << "Person 的析构函数的调用" << endl;
    }

    int age;
};

int main()
{
    Person p;  //默认构造函数调用
    Person p2(10); //有参数构造函数调用
    Person p3(p);  //拷贝构造函数的调用


}

