#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
};

ListNode *solution(ListNode *head) {
    // delete the middle ListNode

    if (head->next == nullptr) {
        return nullptr;
    }

    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *prev;

    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;

    return head;
}
