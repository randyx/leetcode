class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        sum = 0
        for i in range(63):
            sum += (n >> i & 0x01)
        if sum == 1:
            return True
        else:
            return False