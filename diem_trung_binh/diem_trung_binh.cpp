// diem_trung_binh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int n; // 
    cout << "Nhap so luong mon hoc: ";
    cin >> n;

    if (n <= 0) {
        cout << "So luong mon hoc khong hop le!" << endl;
        return 1;
    }

    double tongDiem = 0, diem;
    for (int i = 1; i <= n; ++i) {
        cout << "Nhap diem mon hoc thu " << i << ": ";
        cin >> diem;

        if (diem < 0 || diem > 10) {
            cout << "Diem khong hop le. Vui long nhap lai!" << endl;
            --i; //
            continue;
        }
        tongDiem += diem;
    }

    double diemTrungBinh = tongDiem / n;
    cout << "Diem trung binh cua " << n << " mon hoc la: " << diemTrungBinh << endl;

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
