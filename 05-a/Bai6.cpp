#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};
void printReverse(Node* head, int k) {
    if (head == nullptr || k == 0) {
        return;
    }
    printReverse(head->next, k - 1);
    cout << head->value << " ";
}
