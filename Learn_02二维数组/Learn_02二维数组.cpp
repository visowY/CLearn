// Learn_02二维数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;
void change(int&, int&);
void printArr(const int* , int);

int main()
{
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };


    return 0;
}

//二维数组


//通用交换 int类型的方法
void change(int& p1, int& p2) {
    p1 = p1 + p2;
    p2 = p1 - p2;
    p1 = p1 - p2;
}


