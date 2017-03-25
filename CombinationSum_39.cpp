class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        std::sort(candidates.begin(), candidates.end());
        vector<int> sumRecord;
        vector<vector<int>> allsumRecord;
        calSum(candidates,target,sumRecord,allsumRecord,0);
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
        for(int i=begin; i < candidates.size() && target >= candidates[i]; ++i)
        {
            sumRecord.push_back(candidates[i]);
            calSum(candidates,target-candidates[i],sumRecord,allsumRecord,i);
            sumRecord.pop_back();
        }
    }
};