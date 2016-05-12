class Solution(object):
    def reverseBits(self, n):
        """
        :type n: int
        :rtype: int
        """
        m = 0
        i = 31
        while n!=0:
            m += 2**i*(n&1)
            n >>=1
            i -=1
        return m