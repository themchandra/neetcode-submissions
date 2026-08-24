class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_water = 0;
        int left = 0;
        int right = heights.size() - 1;

        while (left < right) {
            int h = std::min(heights[left],heights[right]);
            int w = right - left;
            int curr_water = h*w;
            max_water = std::max(max_water, curr_water);
            
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }

          

        }
        return max_water;
    }
};
