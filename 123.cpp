class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size()==0) return 0;
        vector<int> profit1(prices.size(),0);
        vector<int> profit2(prices.size(),0);
        int min1=prices[0];
        for(int i=1;i < prices.size()-1;i++)
        {
            if(prices[i]<min1)
                min1=prices[i];
                
            if(prices[i] - min1 > profit1[i-1])
                profit1[i]=prices[i]-min1;
            else
                profit1[i]=profit1[i-1];
        }
        int max2=prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--)
        {
            if(prices[i] > max2)
                max2=prices.at(i);
            if(max2 - prices[i] > profit2[i+1])
                profit2[i]=max2 - prices[i];
            else
                profit2[i]=profit2[i+1];
        }
        int maxprofits=0;
        for(int i=0; i<prices.size()-1;i++)
        maxprofits=maxprofits>(profit1[i]+profit2[i])?maxprofits:(profit1[i]+profit2[i]);
        return maxprofits;
    }
};