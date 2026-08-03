class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> counts;

        // populate counts hashmap for each element
        for (const auto& x : nums){
            counts[x]++;
        }
        
        vector<pair<int, int>> sortedVector(counts.begin(),counts.end());

        sort(sortedVector.begin(), sortedVector.end(), [](const auto& a, const auto& b) {
            return a.second > b.second; 
        });

        vector<int> kElements;
        for (int i = 0; i < k; i++){
            kElements.push_back(sortedVector[i].first);
        }
        return kElements;
    }
};
