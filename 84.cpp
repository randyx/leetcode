class Solution {
public:
    int Maxnum(int m,int n){return m>n?m:n;}
    int largestRectangleArea(vector<int>& height) {
        stack<int> sta;
        int maxarea=0;
        int i=0;
        height.push_back(0);
        while(i<height.size()){
            if(sta.empty()||height[sta.top()]<=height[i])
                sta.push(i++);
            else
                {
                    int num=sta.top();
                    sta.pop();
                    maxarea=Maxnum(maxarea,height[num]*(sta.empty()?i:i-sta.top()-1));
                }
        }
        return maxarea;
    }
};