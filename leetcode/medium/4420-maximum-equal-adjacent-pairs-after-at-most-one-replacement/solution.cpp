class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n = nums.size();
        int base_equal_pairs = 0;

        std::map<std::pair<int, int>, int> unequal_pairs_counts;

        for (int i = 0; i < n - 1; ++i ) {
            if (nums[i] == nums[i + 1]) {
                base_equal_pairs++;
            } else {
                int u = nums[i];
                int v = nums[i + 1];
                if (u > v) std::swap(u, v);
                unequal_pairs_counts[{u, v}]++;
            }
        }

        int max_gain = 0;
        for (auto const& [pair, count] : unequal_pairs_counts) {
            if (count > max_gain) {
                max_gain = count;
            }
        }

        return base_equal_pairs + max_gain;
        
    }
};