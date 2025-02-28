// đa hình 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Tiếng động của động vật" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {  // Ghi đè phương thức sound()
        cout << "Cho sua" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {  // Ghi đè phương thức sound()
        cout << "Meo keu" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();  // Con trỏ lớp cha trỏ tới đối tượng lớp con
    Animal* animal2 = new Cat();  // Con trỏ lớp cha trỏ tới đối tượng lớp con

    animal1->sound();  // Kêu phương thức sound() của lớp Dog
    animal2->sound();  // Kêu phương thức sound() của lớp Cat

    delete animal1;
    delete animal2;

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
