/*
Given head, the head of a linked list, determine if the linked list has a cycle in it.
*/

/**
 * Determines if a linked list has a cycle in it.
 *
 * @param head A pointer to the head of the linked list.
 *
 * @return true if the linked list has a cycle, false otherwise.
 */
bool hasCycle(ListNode *head) {
    if(head == nullptr){
        return false;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}
