class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j,a;
        
        // Syntax fix: Use nums.size() instead of sizeof() on a std::vector
        int len = nums.size(); 
        
        for (i = 0; i < len; i++) {
            for (j = i+1; j < len; j++) {
                a = target - nums[i];
                if (a == nums[j]) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};