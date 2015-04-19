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
    ListNode *swapPairs(ListNode *head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *newlist=new ListNode(-1),*p=newlist;
        ListNode *temp=head;
        while(temp && temp->next){
            ListNode *next=temp->next->next;//指针操作要特别小心  赋值后再进行一系列操作后  就可能影响以前的指针  所以要提前保存好要保留的指针  不能到循环最后在弄指针   给空指针的next赋值会出现错误
            p->next=temp->next;
            p=p->next;
            p->next=temp;//p为空就不好办
            p=p->next;
            p->next=NULL;
            temp=next;
        }
        if(temp) p->next=temp;
        return newlist->next;
    }
};