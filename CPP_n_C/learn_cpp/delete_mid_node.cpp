#include <iostream>
#include <optional>

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

ListNode *betterSol(ListNode *head) {
    // use the fast and slow tech to find the previous point of the mid point
    // link the previous point to the mid's next point
    // delete the mid point to prevent memory leak
    if (head->next == nullptr)
        return nullptr;

    ListNode *slow = head;
    ListNode *fast = head;
    fast = fast->next->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *del = slow->next;
    slow->next = slow->next->next;
    delete del;

    return head;
}
