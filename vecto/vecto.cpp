// vecto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Khai báo một vector chứa các số nguyên
    vector<int> nums;

    // Thêm các phần tử vào vector
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(4);
    // In các phần tử của vector
    cout << "Cac phan tu trong vector: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";  // In từng phần tử
    }
    cout << endl;

    // Truy cập phần tử thứ 2 (index 1)
    cout << "Phan tu thu 2: " << nums[1] << endl;

    // Xóa phần tử cuối cùng
    nums.pop_back();
    cout << "Sau khi xoa phan tu cuoi: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";  // In lại các phần tử
    }
    cout << endl;

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
/*
Thay đổi kích thước linh hoạt: vector có thể tự động thay đổi kích thước khi cần thiết, giúp bạn dễ dàng thêm hoặc xóa phần tử mà không phải lo về việc cấp phát lại bộ nhớ.
Tối ưu bộ nhớ và hiệu năng: Khi cần thiết, vector sẽ tự động cấp phát bộ nhớ mới để chứa các phần tử, giúp bạn sử dụng bộ nhớ một cách hiệu quả.
Truy cập nhanh theo chỉ số: Tương tự như mảng, vector cho phép bạn truy cập phần tử nhanh chóng thông qua chỉ số.
*/