class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        i=0
        numslen =len(nums)
        while numslen!=0:
            if nums[i] == val:
                del nums[i]
            else:
                i += 1
            numslen -= 1
        return nums