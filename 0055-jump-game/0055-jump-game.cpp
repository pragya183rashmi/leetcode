class Solution {
public:
    bool canJump(vector<int>& nums) {
        int fastest = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > fastest) {
                return false;
            }
                fastest = max(fastest, i + nums[i]);
                if (fastest >= nums.size() - 1) {
                    return true;
                }
            }
            return true;
        }
    };