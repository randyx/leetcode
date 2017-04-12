class Solution {
public:
    int trap(vector<int>& height) {
        int sum=0;
        int water=0;
        int i=0;
        int j=1;
        while(j < height.size())
        {
            if(height[j] < height[i])
            {
                j++;
            }
            else
            {
                water = height[i] * (j -i);
                while(j > i)
                {
                    water -= height[i];
                    i++;
                }
                sum += water;
                j++;
            }
        }
        int k = height.size() - 1;
        int m = k - 1;
        while(m >= i)
        {
            if(height[m] < height[k])
            {
                m--;
            }
            else
            {
                water = height[k] * (k - m);
                while(m < k)
                {
                    water -= height[k];
                    k--;
                }
                sum += water;
                m--;
            }
        }
        return sum;
    }
};