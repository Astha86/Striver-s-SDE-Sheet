class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        int carry = 0;
        while((l1 != NULL || l2 != NULL) || carry){
            int sum = 0;
            if(l1 != NULL){
                sum+=l1->val;
                l1 = l1->next;
            }

            if(l2 != NULL){
                sum+=l2->val;
                l2 = l2->next;
            }
            sum+=carry;
            carry = sum/10;
            ListNode* dummy = new ListNode(sum%10);
            temp->next = dummy;
            temp = temp->next;
        }
        return ans->next;
    }
};

/*
    Let m = length of l1
        n = length of l1

    T.C = O(max(m,n))
    S.C = O(max(m,n))
*/