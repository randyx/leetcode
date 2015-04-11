class Solution {
public:
    int trailingZeroes(int n) {
        int i,num=0;
        for(i=1;n/pow(5,i)>=1;i++){
            num=num+n/pow(5,i);
        }
        return num;
    }
};