#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;
    Node(int val) : value(val), next(nullptr), prev(nullptr) {}
    int getValue() {
        return value;
    }
};
Node* sort(Node* head) {
    if (head == nullptr) return nullptr;
    Node* sorted = nullptr;
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        if (sorted == nullptr || sorted->value >= current->value) {
            current->next = sorted;
            if (sorted != nullptr)
                sorted->prev = current;
            sorted = current;
        } else {
            Node* temp = sorted;
            while (temp->next != nullptr && temp->next->value < current->value) {
                temp = temp->next;
            }
            current->next = temp->next;
            if (temp->next != nullptr)
                temp->next->prev = current;
            temp->next = current;
            current->prev = temp;
        }
        current = next;
    }
    sorted->prev = nullptr;
    return sorted;
}
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->value << " ";
        node = node->next;
    }
    cout << endl;
}
