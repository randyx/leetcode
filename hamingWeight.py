class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        num=0
        for i in range(32):
            if n & 2**i:
                num+=1
        return num