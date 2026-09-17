class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        vector<ListNode*> ans;

        int n = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            n++;
            temp = temp->next;
        }

        int size = n / k;
        int extra = n % k;

        temp = head;

        for (int i = 0; i < k; i++) {

            ans.push_back(temp);

            int partSize = size;

            if (extra > 0) {
                partSize++;
                extra--;
            }

            for (int j = 1; j < partSize; j++) {
                if (temp != NULL)
                    temp = temp->next;
            }

            if (temp != NULL) {
                ListNode* nextPart = temp->next;
                temp->next = NULL;
                temp = nextPart;
            }
        }

        return ans;
    }
};