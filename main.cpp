#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <windows.h>

using namespace std;

void showMainPage();
void showRegisterPage();
void showAdminPage();
void showUserPage();

int main() {
    showMainPage();
    system("pause");
    return 0;
}


int readUserAction() {
    int input;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |
        FOREGROUND_RED);
    cin >> input;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |
        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    return input;
}

string readUserInput() {
    string input;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |
        FOREGROUND_RED);
    cin >> input;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |
        FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    return input;
}


void showMainPage() {
    system("cls");
    cout << " ==========================================================" << endl;
    cout << " 1. 管理员登录   2. 用户注册   3. 用户登录   4. 退出程序 " << endl;
    cout << " ==========================================================" << endl;
    cout << "\n\n 请输入操作:  ";

    int action = readUserAction();
    if (action == 1) {
        string username, password;
        cout << " 请输入管理员姓名:  ";
        username = readUserInput();
        cout << " 请输入密码:  ";
        password = readUserInput();
        if (username != "admin" || password != "123456") {
            cout << "\n\n ---- 用户名或密码错误， 登录失败， 返回主菜单 ---- " << endl;
            cin.clear();
            Sleep(2000);
            showMainPage();
        } else {
            cout << "\n\n ---- 登录成功  ---- " << endl;
            cin.clear();
            Sleep(2000);
            showAdminPage();
        }
    } else if (action == 2) {
    } else if (action == 3) {
    } else if (action == 4) {
    } else {
        cin.clear();
        cin.ignore(1024, '\n');
        cout << "\n\n ----无效操作，请重新输入---- ";
        Sleep(2000);
        showMainPage();
    }
}

void showAdminPage() {
    system("cls");
    cout << " ================================================================================ " << endl;
    cout << "  1.查看商品  2.搜索商品  3.下架商品  4.查看订单  5.查看用户  6.封禁用户  7.注销 " << endl;
    cout << " ================================================================================ " << endl;
    cout << "\n\n 请输入操作:  ";

    int action = readUserAction();
    if (action == 1) {
        string username, password;
        cout << " 请输入管理员姓名:  ";
        username = readUserInput();
        cout << " 请输入密码:  ";
        password = readUserInput();
        if (username != "admin" || password != "123456") {
            cout << "\n\n ----用户名或密码错误， 登录失败， 返回主菜单---- " << endl;
            cin.clear();
            Sleep(2000);
            showMainPage();
        } else {
            cout << "\n\n ----登录成功---- " << endl;
            cin.clear();
            Sleep(2000);
            showAdminPage();
        }
    } else if (action == 2) {
    } else if (action == 3) {
    } else if (action == 4) {
    } else {
        cin.clear();
        cin.ignore(1024, '\n');
        cout << "\n\n ----无效操作，请重新输入---- ";
        Sleep(2000);
        showMainPage();
    }
}


void showRegisterPage() {
    int action = readUserAction();
    switch (action) {
    case 1: showAdminPage(); break;
    case 2: showRegisterPage(); break;
    case 3: showUserPage(); break;
    case 4: exit(0); break;
    default:
        break;
    }
}


void showUserPage() {
    int action = readUserAction();
    switch (action) {
    case 1: showAdminPage(); break;
    case 2: showRegisterPage(); break;
    case 3: showUserPage(); break;
    case 4: exit(0); break;
    default:
        break;
    }
}