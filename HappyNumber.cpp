class Solution {
public:
    bool isHappy(int n) {
        map<int,bool> happymap;
        vector<int> happynum;
        while(n!=1){
        while(n>=1){
            happynum.push_back(n%10);
            n=(n-n%10)/10;
        }
        int temp=0;
        vector<int>::iterator it;
        for(it=happynum.begin();it!=happynum.end();it++)
        temp=temp+(*it)*(*it);
        happynum.clear();
        map<int,bool>::iterator l_it;
        l_it=happymap.find(temp);
        if(l_it!=happymap.end())
            return false;
        else
            happymap[temp]=true;
        n=temp;
        }
        return true;
    }
};