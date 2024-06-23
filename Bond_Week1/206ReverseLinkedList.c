/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head; // If the list is empty or has only one element
    }

    struct ListNode* previous = NULL;
    struct ListNode* RL_head = head;
    struct ListNode* L_head = head->next;
    
    // First iteration
    RL_head->next = previous;
    previous = RL_head;
    RL_head = L_head;
    if (RL_head != NULL) L_head = RL_head->next;
    
    // Second iteration
    if (RL_head != NULL) {
        RL_head->next = previous;
        previous = RL_head;
        RL_head = L_head;
        if (RL_head != NULL) L_head = RL_head->next;
    }
    
    // Third iteration
    if (RL_head != NULL) {
        RL_head->next = previous;
        previous = RL_head;
        RL_head = L_head;
        if (RL_head != NULL) L_head = RL_head->next;
    }
    
    // Fourth iteration
    if (RL_head != NULL) {
        RL_head->next = previous;
        previous = RL_head;
        RL_head = L_head;
        if (RL_head != NULL) L_head = RL_head->next;
    }
    
    // Fifth iteration
    if (RL_head != NULL) {
        RL_head->next = previous;
    }

    return RL_head; // RL_head is the new head of the reversed list
}