class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int t = height[i] > height[j] ? height[j] : height[i]; 
        int area = (j - i) * t;
        while(i < j)
        {
            t = height[i] > height[j] ? height[j] : height[i]; 
            area = area > (j - i) * t ? area : (j - i) * t;
            if(t == height[i])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return area;
    }
};