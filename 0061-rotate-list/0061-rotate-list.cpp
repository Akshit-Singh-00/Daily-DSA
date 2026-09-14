
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }
        ListNode* tail = head;
        int len = 1;
        while (tail->next != NULL) {
            len++;
            tail = tail->next;
        }
        k = k % len;
        if (k == 0) {
            return head;
        }
        tail->next = head;
        int steps = len - k;
        ListNode* newtail = tail;
        while (steps--) {
            newtail = newtail->next;
        }
        ListNode* newHead = newtail->next;

        newtail->next = NULL;

        return newHead;
    }
};