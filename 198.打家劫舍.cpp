/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int> &nums) {
        int length = nums.size();
        if (length == 0)
            return 0;
        if (length == 1)
            return nums[0];
        int first = nums[0];
        int second = max(nums[0], nums[1]);
        for (int i = 2; i < length; i++) {
            int temp = second;
            second = max(second, first + nums[i]);
            first = temp;
        }
        return second;
    }
};
// @lc code=end

