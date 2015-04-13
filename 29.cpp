class Solution {//实现的是整数除法，和/相同的功能  所以除不尽就取商
public:
int divide(int dividend, int divisor) {
        long long a = abs((double)dividend);
        if (a>2147483647 && divisor==-1)//把一种特殊情况排除掉
        return 2147483647;
		long long b = abs((double)divisor);
		long long res = 0;
		while(a >= b)
		{
			long long c = b;
			for(int i = 0; a >= c; i++, c <<=1)
			{
				a -= c;
				res += 1<<i;
			}
		}
		return ((dividend ^ divisor) >> 31) ? (-res) : (res);
    }
};