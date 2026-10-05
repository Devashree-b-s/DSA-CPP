class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        int length = 1;
        ListNode* tail = head;

        while (tail->next != nullptr) {
            tail = tail->next;
            length++;
        }

        k %= length;

        if (k == 0) {
            return head;
        }

        tail->next = head;

        int steps = length - k;
        ListNode* newTail = tail;

        while (steps--) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
