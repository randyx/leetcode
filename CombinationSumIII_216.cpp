class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<int> sumRecord;
        vector<vector<int>> allsumRecord;
        calSum(n,sumRecord,allsumRecord,1,k);
        return allsumRecord;
    }
private:
    void calSum(int target, vector<int>& sumRecord, vector<vector<int>>& allsumRecord, int begin,int k)
    {
        if(!target && !k)
        {
            allsumRecord.push_back(sumRecord);
            return;
        }
        for(int i=begin; i < 10 && target >= i * k + k*(k-1)/2; ++i)
        {
                sumRecord.push_back(i);
                calSum(target-i,sumRecord,allsumRecord,i+1,k-1);
                sumRecord.pop_back();
        }
    }
};