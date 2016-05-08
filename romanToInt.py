class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        len_s = len(s)
        num = 0
        for i in range(0, len_s - 1):
            cur = roman[s[i]]
            next = roman[s[i + 1]]
            if cur >= next:
                num += cur
            else:
                num -= cur
        num += roman[s[len_s - 1]]
        return num