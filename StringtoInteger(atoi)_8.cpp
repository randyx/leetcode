class Solution {
public:
    int myAtoi(string str) {
        int sum = 0, i = 0,sign = 1;
        while(str[i] == ' ') i++;//去除空字符
        if(str[i] == '-')
        {
            sign = -1;
            i++;
        }
        else if(str[i] == '+')
            i++;
            
        for(; i < str.size(); i++)
        {
            if('0' <= str[i] && str[i] <= '9')
            {
                if (sum >  INT_MAX / 10 || (sum == INT_MAX / 10 && str[i] - '0' > 7)) //判断是否超过INT范围
                {
                    if (sign == 1) return INT_MAX;
                    else return INT_MIN;
                }
                sum = sum * 10 + (str[i] - '0');
            }
            else
            {
                return sign*sum;
            }
        }
        return sign*sum;
    }
};