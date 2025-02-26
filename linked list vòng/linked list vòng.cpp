// linked list vòng.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Định nghĩa Node cho danh sách liên kết vòng
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr) ,prev(nullptr){}
};

// Hàm thêm node vào cuối danh sách liên kết vòng
void append(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        newNode->next = head;  // Node cuối trỏ về node đầu tiên, tạo vòng
        newNode->prev = head;  // Node đầu trỏ vào node cuối
        return;
    }

    Node* temp = head;
    while (temp->next != head) {  // Duyệt đến node cuối cùng
        temp = temp->next; // node cuối
    }

    temp->next = newNode;// Liên kết node cuối với node mới
    newNode->prev = temp;// liên kết node mới với node cuối
    newNode->next = head;// Node mới trỏ về node đầu tiên, tạo vòng
    head->prev = newNode;// liên kết node đầu với node mới
}

void printList(Node* head) {
    if (!head) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);  // Dừng khi quay lại node đầu tiên
    cout << endl;
}
void printListReverse(Node* head) {
    if (!head) return;

    Node* temp = head->prev;  // Bắt đầu từ node cuối
    do {
        cout << temp->data << " ";
        temp = temp->prev;
    } while (temp != head->prev);  // Dừng khi quay lại node cuối
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Thêm các node vào danh sách liên kết vòng
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);

    cout << "Danh sach lien ket vong doi tu dau den cuoi: ";
    printList(head);
    cout << "Danh sach lien ket vong doi tu cuoi den dau: ";
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
