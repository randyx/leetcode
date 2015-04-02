class Solution {
public:
    bool isPalindrome(int x) {
        int sum=0;
        if(x<0)return false;
        int xx=x;
        while(x!=0){
            sum=sum*10+x%10;
            x=x/10;
        }
        if(sum==xx)
        return true;
        else
        return false;
    }
};