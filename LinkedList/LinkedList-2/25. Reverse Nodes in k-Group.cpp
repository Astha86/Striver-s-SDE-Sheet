class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1) return head;
        ListNode* temp = new ListNode(8);
        temp->next = head;

        ListNode* curr = temp;
        ListNode* front = temp;
        ListNode* back = temp;

        int count = 0;
        while(curr->next != NULL){
            count++;
            curr = curr->next;
        }

        while(count>=k){
            curr = back->next;
            front = curr->next;
            for(int i=1; i<k; i++){
                curr->next = front->next;
                front->next = back->next;
                back->next = front;
                front = curr->next;
            }
            back = curr;
            count-=k;
        }
        return temp->next;
    }
};

// T.C = O(n)
// S.C = O(1)