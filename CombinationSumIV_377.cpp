class Solution {
public:
    vector<int> numsok;
    int combinationSum4(vector<int>& nums, int target) {
        numsok.assign(target+1,-1);
        numsok[0] = 1;
        //int[target+1] func;
        return calSum(nums,target);
    }
private:
    int calSum(vector<int>& nums, int target)
    {
        if (numsok[target] != -1) {
            return numsok[target];
        }
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (target >= nums[i]) {
                res += calSum(nums, target - nums[i]);
            }
        }
        numsok[target] = res;
        return res;
    }
};