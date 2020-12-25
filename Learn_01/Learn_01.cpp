// Learn_01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    int score[10];
    int score2[3] = { 1,2,3 };
    int score3[] = { 1,2,3 };
    int score4[10] = { 0 };

    int length = sizeof(score4) / sizeof(score4[0]);
    for (int i = 0; i < length; i++) {
        cout << score4[i] << endl;
    }

    std::cout << "Hello World!\n";
}

