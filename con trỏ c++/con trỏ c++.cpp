// con trỏ c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
// con trỏ là gì? biến lưu địa chỉ của 1 biến khác
// sử dụng con trỏ và mảng làm 1 số bài tập.

#include <iostream>
using namespace std;
int main()
{
    int a = 10; // giá trị của a = 10, địa chỉ của a là &a nằm ở đâu đó trong bộ nhớ máy tính
    int *ptr = &a; // * này nằm giữa kiểu dữ liệu và tên con trỏ -> syntax . *ptr tức là con trỏ ptr đang có giá trị là địa chỉ của a

    cout << ptr << "\n" << a <<"\n"<< & a; // nếu in ra thì ptr = &a + 1 số gì gì đó, a = 10
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
