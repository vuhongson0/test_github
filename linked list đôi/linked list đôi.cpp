// linked list đôi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//danh sách liên kết đôi dùng 2 con trỏ
#include <iostream>
using namespace std;

// Định nghĩa Node cho danh sách liên kết đôi
struct Node {
    float data;
    Node* next; // con trỏ tiến
    Node* prev; // con trỏ lùi

    // Constructor để khởi tạo node với giá trị data
    Node(float val) : data(val), next(nullptr), prev(nullptr) {}
};

// Hàm thêm node vào cuối danh sách
void append(Node*& head, float val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;  // Thêm node mới vào cuối
    newNode->prev = temp;  // Liên kết node mới với node trước đó
}

// Hàm in danh sách liên kết đôi (từ đầu đến cuối)
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Hàm in danh sách liên kết đôi (từ cuối đến đầu)
void printListReverse(Node* head) {
    if (head == nullptr) return;

    // Tìm node cuối cùng
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Duyệt từ cuối đến đầu
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Thêm các node vào danh sách liên kết đôi
    append(head, 1.4);
    append(head, 2.6);
    append(head, 3.7);
    append(head, 4.2);
    append(head, 5.6);

    cout << "Danh sach lien ket đoi (tu dau den cuoi): ";
    printList(head);

    cout << "Danh sach lien ket đoi (tu cuoi den dau): ";
    printListReverse(head);

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
