class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        retlist = []
        nums.sort()
        numslen = len(nums)
        for i in range(numslen-2):
            if nums[i] > 0:
                break
            if i > 0 and nums[i] == nums[i-1]:
                continue
            target = -nums[i]
            left, right = i + 1, numslen - 1
            while left < right:
                if nums[left] > target:
                    break
                x = nums[left] + nums[right]
                if x > target:
                    right -= 1
                elif x < target:
                    left += 1
                else:
                    retlist.append([nums[i], nums[left], nums[right]])
                    while left < right and nums[left] == nums[left+1]:
                        left += 1
                    while left < right and nums[right] == nums[right-1]:
                        right -= 1
                    left += 1
                    right -= 1
        return retlist