class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;  // Stores number and its index

        // Loop through the array
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];  // Calculate complement
            if (num_map.find(complement) != num_map.end()) {
                // If complement is found in map, return the indices
                return {num_map[complement], i};
            }
            // Store the current number and its index
            num_map[nums[i]] = i;
        }
        
        // Return an empty vector in case there's no solution (though the problem guarantees there is one)
        return {};
    }
};
