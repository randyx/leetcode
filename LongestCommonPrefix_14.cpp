class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret;
        if(strs.empty()) return ret;
        for(int i = 0; i < strs[0].size(); i++)
        {
            char cur = strs[0][i];
            for(int j = 1; j < strs.size(); j++)
            {
                if(i > strs[j].size()-1 || cur != strs[j][i])
                {
                    return ret;
                }
            }
            ret.push_back(cur);
        }
        return ret;
    }
};