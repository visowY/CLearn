// Learn_04通讯录管理系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int number = 0;
 struct Menton {
    int num;
    string name;
    int age;
    string tel;
    string address;
    string hooby;
    void play() {
        cout << "编号：" << num << " 姓名：" << name << " 年龄：" << age << " 电话：" << tel << " 家庭地址：" << address << " 爱好；" << hooby << endl;
    }
};

int Choose() {
    int choice;
    cout << "**********************手机通讯录管理系统***********************" << endl;
    cout << "                              1:根据编号查询" << endl;
    cout << "                              2:修改联系人" << endl;
    cout << "                              3:添加联系人" << endl;
    cout << "                              4:删除联系人" << endl;
    cout << "                              5:显示全部联系人" << endl;
    cout << "                              6:退出" << endl;
    cout << "****************************************************************" << endl;
    cout << "请输入选项（1-6）：";
    cin >> choice;
    system("cls");
    return choice;
}

int SerachByNum(Menton* a) {
    int i, x;
    int serachNum;
    cout << "请输入联系人编号：";
    cin >> serachNum;
    for (i = 0; i < number; i++) {
        if (a[i].num == serachNum) {
            a[i].play();
            return i;
        }
    }
    cout << "抱歉，查无此人" << endl;
    cout << "查找结束，按任意键结束！" << endl;
    cin >> x;
    system("cls");
    return -1;
}


void EditName(Menton* a) {
    int i, x;
    string newname, oldname;
    cout << "原名字：";
    cin >> oldname;
    cout << "修改后的名字：";
    cin >> newname;

    for (i = 0; i < number; i++) {
        if (a[i].name == oldname) {
            a[i].name = newname;
            a[i].play();
        }
    }
}

void AddMembers(Menton* a) {
    int x;
    int i = number;
    cout << "编号：";
    cin >> a[i].num;
    cout << "姓名：";
    cin >> a[i].name;
    cout << "年龄：";
    cin >> a[i].age;
    cout << "电话：";
    cin >> a[i].tel;
    cout << "地址：";
    cin >> a[i].address;
    cout << "爱好：";
    cin >> a[i].hooby;

    number++;
    system("cls");
    cout << "信息已经保存，按任意键结束！";
    cin >> x;
    system("cls");
}

void DeleteMember(Menton* a) {
    int i, j, x;
    i = SerachByNum(a);
    if (i > 0) {
        for (j = i; j < number - 1; j++) {
            a[j] = a[j + 1];
        }
        number--;
        cout << "该联系人成功移除您的通信录，按任意键结束！" << endl;
        cin >> x;
        system("cls");
    }
}

void DisplayAll(Menton* a) {
    int x;
    for (int i = 0; i < number; i++) {
        a[i].play();
    }
    cout << "展示完毕，按任意键结束" << endl;
    cin >> x;
    system("cls");
}



int main()
{
    int x = 0;
    Menton a[50];
    while (x != 6) {
        x = Choose();
        switch (x) {
        case 1:
            SerachByNum(a);
            break;
        case 2:
            EditName(a);
            break;
        case 3:
            AddMembers(a);
            break;
        case 4:
            DeleteMember(a);
            break;
        case 5:
            DisplayAll(a);
            break;
        }
    }
    return 0;
}

