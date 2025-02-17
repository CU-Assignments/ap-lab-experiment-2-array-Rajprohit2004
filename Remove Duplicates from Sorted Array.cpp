class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Check if the array is empty
        if (nums.empty()) {
            return 0;
        }

        int k = 1;  // k will keep track of the number of unique elements

        // Start from the second element and compare with the previous one
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];  // Place the unique element in the correct position
                k++;  // Increment the number of unique elements
            }
        }

        return k;  // Return the number of unique elements
    }
};

