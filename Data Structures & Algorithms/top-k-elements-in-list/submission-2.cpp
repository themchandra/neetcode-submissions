class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // create hashmap of counts for each num
        unordered_map<int,int> counts;
        for (const auto &num : nums) {
            counts[num]++;
        }

        // convert to vector for sorting
        vector<pair<int,int>> count_vec (counts.begin(), counts.end());

        // sort
        sort(count_vec.begin(), count_vec.end(), [] (const auto& a, const auto& b){
            return a.second > b.second;
        });

        vector<int> k_vec;
        // find top k
        for (int i = 0; i < k; i++) {
            k_vec.push_back(count_vec[i].first);
        }

        return k_vec;
    }
};
