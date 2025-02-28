// abstract.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Lớp trừu tượng
class Shape {
public:
    // Phương thức ảo thuần túy, không có thân hàm
    virtual void draw() = 0;
    virtual double area() = 0; // Phương thức ảo thuần túy để tính diện tích

    virtual ~Shape() {}  // Destructor ảo, cần thiết cho lớp trừu tượng
};

// Lớp kế thừa từ lớp Shape
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    // Cung cấp định nghĩa cho phương thức ảo thuần túy
    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    double area() override {
        return 3.14 * radius * radius;
    }
};

// Lớp kế thừa từ lớp Shape
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Cung cấp định nghĩa cho phương thức ảo thuần túy
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }

    double area() override {
        return width * height;
    }
};

int main() {
    // Không thể tạo đối tượng của lớp trừu tượng Shape
    // Shape s;  // Lỗi: Không thể khởi tạo lớp trừu tượng

    // Tạo đối tượng từ các lớp con kế thừa
    Shape* shape1 = new Circle(5);
    Shape* shape2 = new Rectangle(4, 6);

    shape1->draw();
    cout << "Area of Circle: " << shape1->area() << endl;

    shape2->draw();
    cout << "Area of Rectangle: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

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
