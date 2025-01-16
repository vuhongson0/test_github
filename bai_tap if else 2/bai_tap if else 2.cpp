// bai_tap if else 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình C++ để nhập tuổi và in ra kết quả nếu tuổi học sinh
//đó không đủ điều kiện vào học lớp 10. Biết tuổi vào lớp 10 của học sinh
//là 16.

#include <iostream>
using namespace std;
int main()
{
    int tuoi;
    cout << "Hay nhap tuoi: ";
    cin >> tuoi;
    if (tuoi == 16)
    {
        cout << "ban da du tuoi hoc lop 10";
    }
    if (tuoi > 16)
    {
        cout << "ban da qua tuoi hoc lop 10";
    }
    else
    {
        cout << "ban khong du tuoi hoc lop 10";
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
