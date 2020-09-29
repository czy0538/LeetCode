/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> ans;
        int l = 0, r = numbers.size() - 1;
        while(l<r)
        {
            int sum = numbers[l] + numbers[r];
            if (sum== target)
            {
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
            else if (sum < target)
            {
                ++l;
            }
            else
                --r;
        }
        return ans;
    }
};
// @lc code=end
