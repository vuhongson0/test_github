// bài tập tổng hợp oop 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*Xây dựng một hệ thống quản lý các phương tiện giao thông(vehicles), bao gồm các loại phương tiện như xe hơi, xe đạp và xe máy.Các phương tiện này có thể di chuyển và dừng lại.Các lớp phương tiện sẽ có những thuộc tính và phương thức chung nhưng mỗi loại phương tiện có hành vi di chuyển và dừng lại khác nhau.

Phân tích tính chất OOP :
Đóng gói(Encapsulation) :

	Các thuộc tính của phương tiện(như màu sắc, tốc độ) sẽ được đóng gói bên trong các lớp.
	Các phương thức như di chuyển() và dừng lại() sẽ được cung cấp để thao tác với các thuộc tính này.
	Kế thừa(Inheritance) :

	Các lớp con như Car, Bike, Motorbike kế thừa từ lớp cha Vehicle, vì chúng đều là các phương tiện giao thông.
	Đa hình(Polymorphism) :

	Các phương thức như di chuyển() và dừng lại() sẽ được ghi đè trong các lớp con, giúp các phương tiện có hành vi di chuyển và dừng lại khác nhau.
	Sử dụng con trỏ lớp cha để gọi các phương thức của lớp con, thể hiện tính đa hình.
	Trừu tượng(Abstraction) :

	Lớp cha Vehicle có phương thức ảo thuần túy di chuyển() và dừng lại(), chỉ khai báo mà không định nghĩa trong lớp cha.Các lớp con phải cung cấp định nghĩa cụ thể.*/
#include <iostream>
using namespace std;

// Lớp trừu tượng (Abstraction)
class Vehicle {
protected:
    string color;
    int speed;

public:
    Vehicle(string c, int s) : color(c), speed(s) {}

    // Phương thức trừu tượng (sẽ được ghi đè trong lớp con)
    virtual void move() = 0;
    virtual void stop() = 0;

    // Phương thức thông báo thông tin phương tiện
    void showInfo() {
        cout << "Mau sac: " << color << ", Toc do: " << speed << " km/h" << endl;
    }
};

// Lớp con Car kế thừa từ Vehicle (Kế thừa)
class Car : public Vehicle {
public:
    Car(string c, int s) : Vehicle(c, s) {}

    // Ghi đè phương thức move() và stop() (Đa hình)
    void move() override {
        cout << "Xe hoi dang di chuyen voi toc do " << speed << " km/h." << endl;
    }

    void stop() override {
        cout << "Xe hoi dã dung lai." << endl;
    }
};

// Lớp con Bike kế thừa từ Vehicle (Kế thừa)
class Bike : public Vehicle {
public:
    Bike(string c, int s) : Vehicle(c, s) {}

    // Ghi đè phương thức move() và stop() (Đa hình)
    void move() override {
        cout << "Xe dap dang di chuyen voi toc đo " << speed << " km/h." << endl;
    }

    void stop() override {
        cout << "Xe dap da dung lai." << endl;
    }
};

// Lớp con Motorbike kế thừa từ Vehicle (Kế thừa)
class Motorbike : public Vehicle {
public:
    Motorbike(string c, int s) : Vehicle(c, s) {}

    // Ghi đè phương thức move() và stop() (Đa hình)
    void move() override {
        cout << "Xe may dang di chuyen voi toc do " << speed << " km/h." << endl;
    }

    void stop() override {
        cout << "Xe may da dung lai." << endl;
    }
};

// Chương trình chính
int main() {
    // Tạo đối tượng cho từng loại phương tiện
    Vehicle* v1 = new Car("do", 120);
    Vehicle* v2 = new Bike("Xanh", 20);
    Vehicle* v3 = new Motorbike("den", 100);

    // Hiển thị thông tin các phương tiện
    cout << "Thong tin phuong tien 1: ";
    v1->showInfo();
    v1->move();
    v1->stop();

    cout << "\nThong tin phuong tien 2: ";
    v2->showInfo();
    v2->move();
    v2->stop();

    cout << "\nThong tin phuong tien 3: ";
    v3->showInfo();
    v3->move();
    v3->stop();

    // Giải phóng bộ nhớ
    delete v1;
    delete v2;
    delete v3;

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
