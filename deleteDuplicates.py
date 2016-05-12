# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        temp = head
        while temp!=None and temp.next!=None:
            if temp.val == temp.next.val:
                temp.next = temp.next.next
            else:
                temp =temp.next
        return head