// bài tập mảng 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Liệt kê và đếm. ví dụ đếm số nguyên tố

#include <iostream>
#include <math.h>
using namespace std;
int stn(int n)
{
    if (n < 2)
    {
        return 0; // loại số 0, loại số 1, loại số âm
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0; // nếu n chia hết cho 1 số khác chính nó thì nó không là số nguyên tố
        }

    } 
    return 1;// nếu không thỏa mãn 2 trường hợp trên thì sẽ là STN
}
int main()
{
    /*int n = 10;
    for (int i = 0; i <= n; i++)
    {
        if (stn(i) == 1)
        {
            cout << i << " ";
        }
    }*/ // test hàm

    //int a[10] = { 0,1,2,3,4,5,6,7,8,9 };// mảng có sẵn
    int a[20];
    // thêm biến đếm
    int dem = 0;
    // duyệt mảng
    for (int i = 0; i < 20; i++) 
    {
        cin >> a[i];
    }
    // kiểm tra điều kiện stn

    for (int i = 0; i < 20; i++)
    {
        if (stn(a[i]) == 1)
        {
            cout << a[i] << " ";
            ++dem;
        }
    }
    cout << "\n" <<dem;
    // 
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
