/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> nums;
        if (numRows==0)
        {
            return nums;
        }


        nums.push_back(vector<int>(1, 1));
        for (int i = 1; i < numRows; ++i)
        {
            vector<int> temp;
            temp.push_back(1);
            for (int j = 1; j < i; ++j)
            {
                temp.push_back(nums[i - 1][j - 1] + nums[i - 1][j]);
            }
            temp.push_back(1);
            nums.push_back(temp);
        }
        return nums;
    }
};
// @lc code=end
