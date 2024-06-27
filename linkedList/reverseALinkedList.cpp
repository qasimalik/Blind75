/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/

/**
 * Reverses a singly linked list.
 *
 * @param head A pointer to the head of the linked list.
 *
 * @return A pointer to the head of the reversed linked list.
 *
 * @throws None.
 */
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* current = head;
    ListNode* next = nullptr;


    while(current!=nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
