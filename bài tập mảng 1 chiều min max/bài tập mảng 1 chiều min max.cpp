﻿// bài tập mảng 1 chiều min max.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n = 10;
    int a[10];
    // duyệt mảng
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
    }
    // tìm min max,in ra vị trí số min đầu max cuối, in ra số lần xuất hiện,....
    int max = -1000000;
    int min = 1000000;
    for (int i = 0; i < n;i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        } 
      
    }
    // tìm số lần xuất hiện
    int dem_min = 0;
    int dem_max = 0;

    for (int i = 0; i < n;i++)
    {
        if (a[i] == min)
        {
            ++dem_min;
        }
    }
    for (int i = 0; i < n;i++)
    {
        if (a[i] == max)
        {
            ++dem_max;
        }
    }
    cout << max << " " << min << "\nso lan xuat hien max:" << dem_max <<"\n so lan xuat hien min : " << dem_min;
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
