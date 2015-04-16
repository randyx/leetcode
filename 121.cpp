class Solution {
public:
    int maxProfit(vector<int>& prices){
        if(prices.size()==0||prices.size()==1)return false;
        int minprice;
        int maxprice;
		int gap=prices[1]-prices[0];
        if(prices[0]<=prices[1]){
            minprice=prices[0];
            maxprice=prices[1];
        }
        else{
            maxprice=minprice=prices[1];
			gap=0;
        }
        //if(gap==0 && prices.size()==2)
        //return 0;
        for(int i=2;i<prices.size();i++){
            if(minprice<prices[i] && prices[i]<maxprice && (prices[i]-minprice)<gap)
            continue;
            if(prices[i]>=maxprice || (prices[i]-minprice)>=gap){
                maxprice=prices[i];
                gap=maxprice-minprice;
            }
            else
            minprice=prices[i];
        }
        if(gap<=0)
        return 0;
        return gap;
    }
};