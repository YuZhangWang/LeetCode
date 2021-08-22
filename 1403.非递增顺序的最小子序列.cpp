/*
 * @lc app=leetcode.cn id=1403 lang=cpp
 *
 * [1403] 非递增顺序的最小子序列
 */

// @lc code=start
class Solution
{
public:
    vector<int> minSubsequence(vector<int> &nums)
    {
        int temp = 0;
        int total1 = 0;
        int total2 = 0;
        vector<int> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
            total1 = total1 + nums[i];

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            res.push_back(nums[i]);
            total2 += nums[i];
            if (total2 * 2 > total1)
                break;
        }
        return res;
    }
};
// @lc code=end
