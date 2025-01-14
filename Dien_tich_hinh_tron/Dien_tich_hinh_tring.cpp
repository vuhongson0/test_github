// Dien_tich_hinh_tring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//cho ban kinh tinh dien tich, pi =3.14

#include <iostream>
using namespace std;
int main()
{
    float r;
    cout << "nhap ban kinh: ";
    cin >> r;
    cout << " dien tich hinh tron la: " << r * r * 3.14;
    cout << "\nchu vi hinh tron la : " << 2 * r * 3.14;
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
