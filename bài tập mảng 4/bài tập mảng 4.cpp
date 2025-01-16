// bài tập mảng 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//đếm các phần tử khác nhau

#include <iostream>
using namespace std;
int main()
{
	int a[10];
	// duyệt mảng
	for (int i = 0; i < 10;i++)
	{
		cin >> a[i];
	}
	int dem_khac_nhau = 0;
	bool check = true;
	for (int i = 0; i < 10;i++)
	{
		
		for (int j = 0;j < i;j++)
		{
			if (a[i] == a[j])
			{	
				check = false;
				break;
			}
		}
		if (check == true)
		{
			++dem_khac_nhau;
		}
	}
	
	cout << dem_khac_nhau;
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
