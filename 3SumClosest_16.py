class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        numslen = len(nums)
        olddiff = nums[0] + nums[1] + nums[2] - target
        for i in range(numslen-2):
            #if i = 0 and nums[0] >= target:
            #    return nums[0]+nums[1]+nums[2]
            left, right = i + 1, numslen - 1
            while left < right:
                #没有考虑有负数的情况，此判断有误
                #if nums[left] + nums[i] > target:
                #    break
                x = nums[i] + nums[left] + nums[right]
                diff = x - target
                if abs(diff) < abs(olddiff):
                    olddiff = diff
                if diff > 0:
                    right -= 1
                elif diff < 0: 
                    left += 1
                else:
                    return target
        return target+olddiff