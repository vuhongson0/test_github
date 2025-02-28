// đa hình 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {  // Phương thức ảo
        cout << "Ve hinh dang co ban" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {  // Ghi đè phương thức draw
        cout << "Ve hinh tron" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {  // Ghi đè phương thức draw
        cout << "Ve hinh chu nhat" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();       // Tạo đối tượng Circle
    Shape* shape2 = new Rectangle();    // Tạo đối tượng Rectangle

    shape1->draw();  // Gọi phương thức draw() của lớp Circle
    shape2->draw();  // Gọi phương thức draw() của lớp Rectangle

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
