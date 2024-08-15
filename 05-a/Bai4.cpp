#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};
Node* deleteNode(Node* head, int pos) {
    if (head == nullptr || pos < 0) return head;
    Node* temp = head;
    if (pos == 0) {
        head = temp->next; 
        delete temp;       
        return head;
    }
    for (int i = 0; temp != nullptr && i < pos - 1; i++)
        temp = temp->next;
    if (temp == nullptr || temp->next == nullptr)
        return head;
    Node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
    return head;
}
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
