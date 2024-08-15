#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};
Node* insertHead(Node* head, int value) {
    Node* newNode = new Node;  
    newNode->value = value;    
    newNode->next = head;      
    head = newNode;            
    return head;               
}
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}
