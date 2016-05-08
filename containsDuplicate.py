class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if not nums:
            return False
        disdictmap = {}
        for x in range(len(nums)):
            if disdictmap.has_key(nums[x]):
                return True
            else:
                disdictmap[nums[x]]=1
        return False