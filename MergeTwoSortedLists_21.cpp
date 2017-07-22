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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head;
        //申请一个有实体指向的指针，而不是空指针，空指针next要报错
        ListNode* target = new ListNode(NULL);
        head = target;
        while(l1 && l2)
        {
            if(l1->val >= l2->val)
            {
                target->next = l2;
                l2 = l2->next;
            }
            else
            {
                target->next = l1;
                l1 = l1->next;
            }
            target = target->next;
        }
        target->next = (l1 ? l1 : l2);
        return head->next;
    }
};