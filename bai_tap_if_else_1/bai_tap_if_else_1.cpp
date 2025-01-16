// bai_tap_if_else_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//1. Viết một chương trình C++ để nhập lương nhân viên, tính thuế thu nhập và lương ròng(số tiền lương thực sự mà nhân viên đó nhận được).Với các thông số giả sử như sau(không theo luật lương, chỉ là con số giả
//sử để dễ tính toán) :
   //  30 % thuế thu nhập nếu lương là 15 triệu.
    // 20 % thuế thu nhập nếu lương từ 7 đến 15 triệu.
    // 10 % thuế thu nhập nếu lương dưới 7 triệu.

#include <iostream>
using namespace std;
int main()
{
    int luong;
    cout << "Nhap tien luong: ";
    cin >> luong;
    if (luong > 15)
    {
        cout << "luong cua ban la: " << luong << "trieu";
        cout << "\nluong thuc linh cua ban la: " << luong * 0.7 << "trieu";
        cout << "\ntien thue cua ban la: " << luong * 0.3 << "trieu"; 
    }
    else if (luong < 7)
    {
        cout << "luong cua ban la: " << luong << "trieu";
        cout << "\nluong thuc linh cua ban la: " << luong * 0.9 << "trieu";
        cout << "\ntien thue cua ban la: " << luong * 0.1 << "trieu";
    }
    else if( luong >7 && luong <15)
    {
        cout << "luong cua ban la: " << luong << "trieu";
        cout << "\nluong thuc linh cua ban la: " << luong * 0.8 << "trieu";
        cout << "\ntien thue cua ban la: " << luong * 0.2 << "trieu";
    }
    return 0;
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
