class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp=head;
        while(temp!=NULL &&  temp->next!=NULL){
            if(temp->val==temp->next->val){

            ListNode* tep=temp->next;
            temp->next=temp->next->next;
            delete tep;
            }
            else{
                temp=temp->next;
            }
        }

        return head;
    }
};