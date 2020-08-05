// Learn_01复合类型.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

/*
    如何创建和使用数组
    如何创建和使用string
    如何使用getline() 和 get()方法
    如何使用结构体，共用体，枚举，指针
    如何通过new deleate来管理动态内存
    如何创建动态数组，动态结构
    自动存储，静态存储和动态存储
*/

#include <iostream>
using namespace std;
void test01();
void test02();
void change(int&, int&);
void printArr(const int*, int);
int main()
{
    //test01();
    test02();
    return 0;
}


// 一维数组 数据元素逆置
void test01() {
    int arr[5] = { 1,2,3,4,5 };

    cout << "逆置前的数组" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;

    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    while (start<end)
    {
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];
        start++;
        end--;
    }
   
    cout << "逆置后的数组" << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}


//一维数组 冒泡排序 升序排序
void test02() {

    int arr[9] = { 4,5,6,2,8,9,7,6,4 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "排序前的数组" << endl;
    printArr(arr,size);

    //冒泡排序
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                change(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "排序后的数组" << endl;
    printArr(arr, size);
}

//通用交换 int类型的方法
void change(int& p1, int& p2) {
    p1 = p1 + p2;
    p2 = p1 - p2;
    p1 = p1 - p2;
}

//打印数组
void printArr(const int* p1, int size) {
    for (int i = 0; i < size; i++) {
        cout << *p1 << "\t";
        p1 = (p1 + 1);
    }
}






