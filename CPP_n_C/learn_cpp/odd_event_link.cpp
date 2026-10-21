
struct ListNode {
    int val;
    ListNode *next;
};

ListNode *odd_even_list(ListNode *head) {
    // first node is odd, next node is even
    // group odd first then even
    // O(n) -> iterate through all nodes, check if index even => move node to end
    if (head == nullptr || head->next == nullptr)
        return head;

    // track end node
    int curri{2};
    int length{1};

    ListNode *end = head;
    while (end->next != nullptr) {
        length++;
        end = end->next;
    }

    // move even nodes to end
    ListNode *cur = head->next;
    ListNode *prev = head;

    for (int i = 1; i < length; i++) { // 1 2 3 4 5
        if (curri % 2 == 0 && cur->next != nullptr) {
            end->next = cur;
            end = cur;
            cur = cur->next;
            prev->next = cur;
        } else {
            prev = cur;
            cur = cur->next;
        }
        curri++;
    }
    return head;
}

int main(void) {}
