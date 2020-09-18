// Learn_09有元.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

class Building {
    friend class GoodGay;
public :
    string _sittingRoom = "客厅";

private :
    string _bedRoom = "卧室";
};

class GoodGay {
public:
    Building* building;

    void Visit() {
        cout << building->_sittingRoom << endl;
        cout << building->_bedRoom << endl;
    }
};




void Test01() {
    Building build;
    GoodGay gay;
    gay.building = &build;
    gay.Visit();
}

int main()
{
    Test01();
}
