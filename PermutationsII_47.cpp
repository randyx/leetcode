class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> res;
        //std::sort(nums.begin(),nums.end());
        dfs(0, nums, res);
        return res;
    }
private:
    void dfs(int pos, vector<int> &num, vector<vector<int>> &result)
    {
        if(pos == num.size())
        {
            result.push_back(num);
        }
        else
        {
            for(int i=pos; i < num.size(); i++)
            {
                int j = i-1;
                while(j >= pos && num[j] != num[i])
                {
                    j--;
                }
                if(i == pos || j == pos-1)
                {
                    swap(num[i], num[pos]);
                    dfs(pos+1, num, result);
                    swap(num[i], num[pos]);
                }
            }
        }
    }
};