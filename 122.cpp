class Solution {
public:
    int maxProfit(vector<int> &prices) //找到递增的一个序列就可以了
    {
	if (prices.size() <= 1) return 0;
	int profit = 0;
	for (int i = 1; i < prices.size(); i++)
	{
		if (prices[i-1] < prices[i])
		{
			profit += prices[i] - prices[i-1];
		}
	}
	return profit;
    }
};