# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseBetween(self, head, m, n):
        """
        :type head: ListNode
        :type m: int
        :type n: int
        :rtype: ListNode
        """
        i = n - m
        if i == 0:
            return head
        fristhead = head
        while m > 2:
            fristhead = fristhead.next
            m -= 1
        if m == 1:
            temphead = fristhead
        else:
            temphead = fristhead.next
        pre = temphead
        p =temphead.next
        temp = p
        while i >= 1:
            temp = p.next
            p.next = pre
            pre = p
            p = temp
            i -= 1
        temphead.next = temp
        if not m == 1:
            fristhead.next = pre
        if m == 1:
            return pre
        return head