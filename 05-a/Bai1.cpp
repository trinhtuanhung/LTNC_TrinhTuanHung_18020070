#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void print(Node* head) {
    while (head != nullptr) {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

