class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,char>mapstring;
        map<int,char>::iterator l_it;
        vector<int>::iterator it;
        for(it=nums.begin();it!=nums.end();it++){
            l_it=mapstring.find(*it);
            if(l_it==mapstring.end())
            mapstring[*it]=true;
            else
            mapstring.erase(l_it);
        }
        l_it=mapstring.begin();
        return l_it->first;
    }
};