// linked list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Danh sách liên kết (Linked List) là một cấu trúc dữ liệu trong lập trình, nơi các phần tử (hoặc "node") được lưu trữ không liên tiếp trong bộ nhớ, và mỗi phần tử sẽ chứa một tham chiếu (hoặc con trỏ) đến phần tử kế tiếp. Mỗi phần tử trong danh sách liên kết có thể là một đối tượng hoặc một biến đơn giản, nhưng tất cả các phần tử sẽ được kết nối với nhau thông qua các con trỏ.

//Các thành phần cơ bản của một Linked List :
//Node(Phần tử) :

//Mỗi node trong danh sách liên kết chứa ít nhất hai thành phần :
//Dữ liệu(Data) : Lưu trữ giá trị của phần tử.
//Con trỏ(Next) : Một con trỏ(hoặc tham chiếu) trỏ đến phần tử tiếp theo trong danh sách.
//Head(Đầu danh sách) :
//Là con trỏ(hoặc tham chiếu) trỏ đến phần tử đầu tiên trong danh sách.
//Nếu danh sách rỗng, con trỏ head sẽ trỏ đến nullptr hoặc NULL.
//Tail(Đuôi danh sách) (Tùy vào loại danh sách) :
// Một số dạng danh sách liên kết có một con trỏ tail trỏ đến phần tử cuối cùng, giúp dễ dàng thêm phần tử vào cuối danh sách mà không cần duyệt toàn bộ danh sách.

#include <iostream>
using namespace std;

// Định nghĩa cấu trúc của Node trong danh sách liên kết
struct Node {
    float data;     // Dữ liệu của node
    Node* next;   // Con trỏ đến node kế tiếp

    // Constructor để khởi tạo node với giá trị data 
    // Constructor là hàm đặc biệt được gọi tự động khi bạn tạo đối tượng của lớp.
    // Không có kiểu trả về và có tên giống với tên lớp.
    // Có thể có tham số để khởi tạo các giá trị ban đầu cho đối tượng.
    // Bạn có thể nạp chồng constructor để cho phép tạo đối tượng theo nhiều cách khác nhau.
    Node(float val) : data(val), next(nullptr) {} // gán giá trị nguyên val vào data
    // nếu val và data khác kiểu dữ liệu nhau thì 
};

// Hàm in danh sách liên kết
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Tạo một danh sách liên kết đơn 1 -> 2 -> 3 -> 4->5->6
    Node* head = new Node(1.5); // tạo ra node mới = 1, gán vào head 
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    cout << "Danh sach lien ket: ";
    printList(head);

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
