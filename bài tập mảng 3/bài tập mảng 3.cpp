// bài tập mảng 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// kiểm tra mảng đối xứng

#include <iostream>
using namespace std;
// tạo hàm cho mảng đối xứng, mảng đối xứng nếu 2 phần tử đối xứng nhau = nhau
int mang_doi_xung(int a[], int n)
{
	// duyệt từ đầu đến phần tử n/2
	for (int i = 0; i < n / 2;i++)
	{
		if (a[i] == a[n - 1 - i])
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int n = 10;
	int a[10];
	//duyệt mảng
	for (int i = 0;i < 10;i++)
	{
		cin >> a[i];
	}
	//test hàm
	if (mang_doi_xung(a, n) == 1)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
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
