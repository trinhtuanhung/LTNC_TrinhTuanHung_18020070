#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};
void printLast(Node* head, int k) {
    if (head == nullptr || k <= 0) return;
    Node* first = head;
    Node* second = head;
    for (int i = 0; i < k; ++i) {
        if (first == nullptr) return;  
        first = first->next;
    }
    while (first != nullptr) {
        first = first->next;
        second = second->next;
    }
    while (second != nullptr) {
        cout << second->value << " ";
        second = second->next;
    }
}
