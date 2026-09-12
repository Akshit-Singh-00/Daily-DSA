class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        while (true) {
          
            ListNode* temp = prev;

            for (int i = 0; i < k; i++) {
                temp = temp->next;
                if (temp == NULL)
                    return dummy->next;
            }

         
            ListNode* curr = prev->next;
            ListNode* next = temp->next;
            ListNode* before = next;

            while (curr != next) {
                ListNode* t = curr->next;
                curr->next = before;
                before = curr;
                curr = t;
            }

           
            ListNode* first = prev->next;
            prev->next = temp;
            prev = first;
        }
    }
};