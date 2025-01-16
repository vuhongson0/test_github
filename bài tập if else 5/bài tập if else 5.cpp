// bài tập if else 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//6.Viết chương trình C++ để tìm nghiệm của phương trình bậc hai ax2 +
//bx + c = 0. Biết rằng :
// Nếu a và b cùng bằng 0 thì phương trình vô nghiệm.
// Nếu a = 0 thì phương trình có một nghiệm là(-c / b).
// Nếu b2 - 4ac & lt; 0, thì phương trình vô nghiệm.
// Nếu không, phương trình có hai nghiệm, dùng công thức tính nghiệm
//để tính.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c;
	cout << "nhap so a: ";
	cin >> a;
	cout << "nhap so b: ";
	cin >> b;
	cout << "nhap so c: ";
	cin >> c;
	float x, delta,x1,x2;
	//
	if (a == 0)
	{	x = -c / b;
		cout << "day khong phai la phuong trinh bac 2 ";
		cout << "\nnghiem cua phuong trinh la: x = " << x; 
		
	}
	else
	{
		delta = b * b - 4 * a * c;
		cout << "delta = " << delta;
		if (delta < 0)
		{
			cout << "\nphuong trinh vo nghiem";
		}
		else if (delta == 0)
		{
			x = -c / b;
			cout << "\nnghiem cua phuon trinh la: " << x;
		}
		else if (delta > 0)
		{
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2 * a);
			cout << "\n2 nghiem cua phuong trinh la: x1 = " << x1 <<" va x2 = " << x2;
		}


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
