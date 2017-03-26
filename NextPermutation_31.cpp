class Solution {
public:
        void nextPermutation(vector<int>& nums) {
            int i = nums.size()-1;
            int start;
            //从后向前找递增序列
            while(i - 1 >= 0 && nums[i-1] >= nums[i])
            {
                i--;
            }
            //判断整个序列是否都是递减的
            if(i - 1 != -1)
            {
                start = i;
                int j = i;
                while(j <= nums.size()-1 && nums[i-1] < nums[j])
                {
                    j++;
                }
                int tmp = nums[j-1];
                nums[j-1] = nums[i-1];
                nums[i-1] = tmp;
            }
            else
            {
                start = 0;
            }
            //递减序列变成递增序列
            for(int len = nums.size()-1;len > start;start++,len--)
            {
                int tmp = nums[len];
                nums[len] = nums[start];
                nums[start] = tmp;
            }
        }
};