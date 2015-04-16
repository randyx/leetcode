class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==0 ||nums.size()==1) return true;
        int maxstep=nums[0];
        for(int i=1;i<nums.size();i++){
            if(maxstep==0) return false;
            maxstep--;
            if(nums[i]>=maxstep)
            maxstep=nums[i];
            if(maxstep+i>=nums.size()-1)
            return true;
        }
    }
};