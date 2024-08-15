#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};
Node* insertTail(Node* head, int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = nullptr;
    if (head == nullptr) {
        return newNode;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
