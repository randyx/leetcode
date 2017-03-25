class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        vector<int> sumRecord;
        vector<vector<int>> allsumRecord;
        calSum(candidates,target,sumRecord,allsumRecord,-1);
        return allsumRecord;
    }
private:
    void calSum(vector<int>& candidates, int target, vector<int>& sumRecord, vector<vector<int>>& allsumRecord, int begin)
    {
        if(!target)
        {
            allsumRecord.push_back(sumRecord);
            return;
        }
        for(int i=begin+1; i < candidates.size() && target >= candidates[i]; ++i)
        {
            if(i == begin+1 || candidates[i] != candidates[i-1])
            {
                sumRecord.push_back(candidates[i]);
                calSum(candidates,target-candidates[i],sumRecord,allsumRecord,i);
                sumRecord.pop_back();
            }
        }
    }
};