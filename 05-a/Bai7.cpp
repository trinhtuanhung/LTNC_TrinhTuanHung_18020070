#include <iostream>
using namespace std;

struct Node {
    int value;
    Node *next;
};
Node* deleteSingle(Node* head) {
    Node *prev = nullptr, *curr = head;
    bool found = false;
    while (curr != nullptr) {
        Node *next = curr->next;
        if ((prev == nullptr || prev->value != curr->value) &&
            (next == nullptr || next->value != curr->value)) {
            if (prev == nullptr) {
                head = curr->next;
            } else {
                prev->next = curr->next;
            }
            delete curr;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
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
