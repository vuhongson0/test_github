// bài tập if else 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình C++ để người dùng nhập vào 3 số nguyên và tìm số
//lớn nhất trong 3 số đó.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Nhap so c: ";
    cin >> c;
   
    if (a > b && a > b)
    {
        cout << "so lon nhat la : " << a;
    }
    if (b > a && b > c)
    {
        cout << "so lon nhat la : " << b;
    }
    if (c > a && c > b)
    {
        cout << "so lon nhat la : " << c;
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
