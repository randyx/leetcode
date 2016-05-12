# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        temp = ListNode(0)
        temp.next = head
        temphead = temp
        while temp.next!=None:
            if temp.next.val == val:
                temp.next = temp.next.next
            else:
                temp = temp.next
        return temphead.next