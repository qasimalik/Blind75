/*
You are given the heads of two sorted linked lists list1 and list2. 
Merge the two lists into one sorted list. 
The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.
*/

/**
 * Merge two sorted linked lists into one sorted list by splicing together the nodes of the first two lists.
 *
 * @param list1 The head of the first sorted linked list
 * @param list2 The head of the second sorted linked list
 *
 * @return The head of the merged sorted linked list
 *
 * @throws None
 */
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    while((list1 != nullptr) && (list2 != nullptr)){
        if((list1->data) < (list2->data)){
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }
    
    if(list1 != nullptr){
        current->next = list1
    } else {
        current->next = list2;
    }

    return dummy->next;
}
