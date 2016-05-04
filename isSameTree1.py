class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s) > len(t):
            s,t = t,s
        map26 = {}
        for x in range(len(s)):
            if map26.has_key(s[x]):
                map26[s[x]] += 1
            else:
                map26[s[x]] = 1
        for y in range(len(t)):
            if map26.has_key(t[y]):
                map26[t[y]] -= 1
                if(map26[t[y]] == -1):
                    return False
            else:
               return False
        return True