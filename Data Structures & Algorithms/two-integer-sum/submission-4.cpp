class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen = {};
        for (int i = 0; i < nums.size(); i++){
            int num_to_find = target - nums[i];
            if (seen.contains(num_to_find)) {
                return {seen[num_to_find], i};
            } else {
                seen[nums[i]] = i;
            }
        }
        return {};
    }
};
