class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        ListNode* evenHead = new ListNode(-1);
        ListNode* oddHead = new ListNode(-1);

        ListNode* even = evenHead;
        ListNode* odd = oddHead;

        int pos = 1;

        while (head != NULL) {

            ListNode* nextNode = head->next;

            if (pos % 2 == 0) {
                even->next = head;
                even = even->next;
            } else {
                odd->next = head;
                odd = odd->next;
            }

            head = nextNode;
            pos++;
        }

        odd->next = evenHead->next;
        even->next = NULL;

        ListNode* newHead = oddHead->next;

        return newHead;
    }
};