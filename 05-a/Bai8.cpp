#include <iostream>
#include <unordered_set>
using namespace std;

struct Node {
    int value;
    Node* next;
    Node(int x) : value(x), next(nullptr) {}
};
Node* deleteDuplicates(Node* head) {
    if (!head) return nullptr;
    unordered_set<int> seen;
    Node* current = head;
    Node* prev = nullptr;
    while (current) {
        if (seen.find(current->value) != seen.end()) {
            prev->next = current->next;
            delete current;
        } else {
            seen.insert(current->value);
            prev = current;
        }
        current = prev->next;
    }
    return head;
}
void printList(Node* head) {
    while (head) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}
