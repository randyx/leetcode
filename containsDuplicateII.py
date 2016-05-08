class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        if not nums:
            return False
        disdictmap = {}
        for x in range(len(nums)):
            if disdictmap.has_key(nums[x]) and (x - disdictmap[nums[x]] <= k):
                return True
            else:
                disdictmap[nums[x]]=x
        return False