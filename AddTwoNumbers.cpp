/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode* i1 = l1;
        ListNode* i2 = l2;
        
        ListNode* ret = new ListNode(0);
        ListNode* ret_last = ret;
        
        bool carry = false;
        
        while(i1 != nullptr || i2 != nullptr)
        {
            int s = 0;

            if (i1 != nullptr)
                s = i1->val, i1 = i1->next;
            
            if (i2 != nullptr)
                s += i2->val, i2 = i2->next;
            
            s += carry;

            ret_last->next = new ListNode(s % 10);
            ret_last = ret_last->next;

            carry = (s >= 10);
        }
        
        if (carry)
            ret_last->next = new ListNode(1);
        
        ret_last = ret->next;
        delete ret;
        
        return ret_last;
    }
};