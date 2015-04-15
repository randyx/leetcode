class Solution {
public:
    string convertToTitle(int n) {
        string ret;
        while(n>=1){
            if(!(n%26)){
                ret='Z'+ret;
                n=(n-26)/26;
            }
            else{
            ret=char(n%26+64)+ret;
            n=(n-n%26)/26;
            }
        }
        return ret;
    }
};