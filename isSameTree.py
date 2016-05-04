# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        if isinstance(p,TreeNode) and isinstance(q,TreeNode):
            pass
        elif not (isinstance(p,TreeNode) or isinstance(q,TreeNode)):
            return True
        else:
            return False
        if p.val == q.val:
            valsig = True
        else:
            valsig = False
        leftsig = self.isSameTree(p.left,q.left)
        rightsig = self.isSameTree(p.right,q.right)
        return (leftsig and rightsig and valsig)
        