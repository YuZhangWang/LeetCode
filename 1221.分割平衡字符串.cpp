/*
 * @lc app=leetcode.cn id=1221 lang=cpp
 *
 * [1221] 分割平衡字符串
*/

// @lc code=start
class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int total = 0;
        int balance = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
                balance++;
            if (s[i] == 'R')
                balance--;
            if (balance == 0)
                total++;
        }
        return total;
    }
};
// @lc code=end
