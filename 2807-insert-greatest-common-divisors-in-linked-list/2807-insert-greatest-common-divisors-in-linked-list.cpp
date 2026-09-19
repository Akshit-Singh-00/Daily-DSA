class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* curr = head;

        while (curr != NULL && curr->next != NULL) {

            int gcdValue = gcd(curr->val, curr->next->val);

            ListNode* newNode = new ListNode(gcdValue);

            newNode->next = curr->next;
            curr->next = newNode;

            curr = newNode->next;
        }

        return head;
    }
};