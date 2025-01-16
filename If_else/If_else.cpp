// If_else.cpp : This file contains the 'main' function. Program execution begins and ends there.
//diem tbm 

#include <iostream>
using namespace std;
int main()
{
	float toan, van, anh, ly, hoa, sinh, trungbinh;
	cout << "Nhap diem toan: ";
	cin >> toan;
	if (toan > 10 || toan < 0)
	{
		cout << "\nSai roi!!!";
		return 1;
	}
	cout << "\nNhap diem van: ";
	cin >> van;
	if (van > 10 || van< 0)
	{
		cout << "\nSai roi!!!";
		return 1;
	}
	cout << "\nNhap diem anh: ";
	cin >> anh;
	if (anh> 10 || anh < 0)
	{
		cout << "\nSai roi!!!";
		return 1;
	}
	cout << "\nNhap diem ly: ";
	cin >> ly;
	if (ly > 10 || ly < 0)
	{
		cout << "\nSai roi!!!";
		return 1;
	}
	cout << "\nNhap diem hoa: ";
	cin >> hoa;
	if (hoa > 10 || hoa < 0)
	{
		cout << "\nSai roi!!!";
		return 1;
	}
	cout << "\nNhap diem sinh: ";
	cin >> sinh;
	if (sinh > 10 || sinh < 0)
	{
		cout << "\nSai roi!!!";
		return 1;
	}
	trungbinh = (toan + van + anh + ly + hoa + sinh) / 6;
	cout << "\nDiem trung binh: " << trungbinh;

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
