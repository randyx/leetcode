# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head == None or head.next == None:return head
        pre = head
        p = head.next
        pre.next = None
        while not p == None:
            temp = p.next
            p.next = pre
            pre = p
            p = temp
        return pre