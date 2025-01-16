// bai tap if else 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình C++ để nhập một số nguyên bất kỳ từ bàn phím và
//in kết quả ra màn hình để thông báo cho người dùng biết số đó lớn hay
//nhỏ hơn 100.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "nhap so a: ";
    cin >> a;
    if (a > 100)
    {
        cout << "so a la:" << a;
        cout << "so a lon hon 100";
    }
    if (a < 100)
    {
        cout << "so a la:" << a;
        cout << "so a nho hon 100";
    }
    if (a == 100)
    {
        cout << "so a la:" << a;
        //cout << "so a = 100";
    }
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
