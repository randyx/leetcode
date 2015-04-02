class Solution {
public:
    int reverse(int x) {
        double sum=0;
        while(x!=0){
            sum=sum*10+x%10;
            x=(x-x%10)/10;
        }
        if((int)sum!=sum)
        return 0;
        else
        return sum;
    }
};