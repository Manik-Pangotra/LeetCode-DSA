class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int a = -1;
        int a2 = -1;
        
        if (n == 0) return {-1, -1};
        
        int m = s + (e - s) / 2;
        
        while (s <= e) {
            if (nums[m] == target) {
                a = m;
                s = m + 1;
            }
            else if (nums[m] > target) {
                e = m - 1;
            }
            else {
                s = m + 1;
            }
            if (s <= e) m = s + (e - s) / 2; 
        } 
        
        s = 0;
        e = n - 1;
        m = s + (e - s) / 2;
        
        while (s <= e) {
            if (nums[m] == target) {
                a2 = m;
                e = m - 1;
            }
            else if (nums[m] > target) {
                e = m - 1;
            }
            else {
                s = m + 1;
            }
            if (s <= e) m = s + (e - s) / 2;
        }
        
        return {a2, a};
    }
};
