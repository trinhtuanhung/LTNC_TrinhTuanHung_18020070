SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if (head1 == nullptr) return head2;
    if (head2 == nullptr) return head1;

    SinglyLinkedListNode outp(0);
    SinglyLinkedListNode* p = &outp;

    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data <= head2->data) {
            p->next = head1;
            head1 = head1->next;
        }
        else {
            p->next = head2;
            head2 = head2->next;
        }
        p = p->next;
    }

    if (head1 != nullptr) {
        p->next = head1;
    }
    else {
        p->next = head2;
    }

    return outp.next;
}