class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        str = ""
        values = [1000,900,500,400,100,90,50,40,10,9,5,4,1];
        strs = ["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"];
        for x in range(len(values)):
            while num >= values[x]:
                num -= values[x]
                str += strs[x]
        return str