class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector <int>> res;
        vector<int> permutation;
        permuteone(nums, res, permutation, 0);
        return res;
    }
private:
    void permuteone(vector<int>& nums, vector<vector<int>>& res, vector<int>& permutation, int i)
    {
        if(nums.size() == 1)
        {
            permutation.push_back(nums[0]);
            res.push_back(permutation);
            permutation.pop_back();
            return;
        }
        for(int j = 0; j < nums.size(); j++)
        {
            permutation.push_back(nums[j]);
            int temp = nums[j];
            nums.erase(nums.begin()+j);
            permuteone(nums, res, permutation, j);
            permutation.pop_back();
            nums.insert(nums.begin()+j, temp);
        }
    }
};

// leetcode better solution:
// void dfs(int pos, vector<int> &num, vector<vector<int>> &result){
// if(pos == num.size()){
//     result.push_back(num);
// }
// else{
//     for(int i=pos; i<num.size(); i++){
//         swap(num[i], num[pos]);
//         dfs(pos+1, num, result);
//         swap(num[i], num[pos]);
//         }
// }