# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if not isinstance(root,TreeNode):
            return 0
        i = self.maxDepth(root.left)
        j = self.maxDepth(root.right)
        if i >j:
            i += 1
            return i
        else:
            j += 1
            return j