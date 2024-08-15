#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};
Node* insert(Node* head, int value) {
    Node* newNode = new Node;
    newNode->value = value;
    newNode->next = nullptr;
    if (!head || (head->value >= value && head->next && head->value < head->next->value) ||
        (head->value <= value && head->next && head->value > head->next->value)) {
        newNode->next = head;
        return newNode;
    }
    Node* current = head;
    if (current->value < current->next->value) {
        while (current->next && current->next->value < value) {
            current = current->next;
        }
    } else {
        while (current->next && current->next->value > value) {
            current = current->next;
        }
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}
void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
