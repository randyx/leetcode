class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int temp;
        int carry=0;
        temp=(digits[digits.size()-1]+1+carry)/10;
        digits[digits.size()-1]=(digits[digits.size()-1]+1+carry)%10;
        carry=temp;
        int i=digits.size()-2;
        while(i>=0){
            temp=(digits[i]+carry)/10;
            digits[i]=(digits[i]+carry)%10;
            carry=temp;
            i--;
        }
        if(carry)
        digits.insert(digits.begin(),1);
        return digits;
    }
};