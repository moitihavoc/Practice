
struct ListNode {
    int val;
    ListNode *next;
};

ListNode *solution(ListNode *head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    ListNode *p = nullptr;
    ListNode *c = head;
    ListNode *n = head;

    while (n != nullptr) {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }

    return p;
}
