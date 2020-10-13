/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int count[3] = {0};
        for (const auto i : nums)
        {
            switch (i)
            {
            case 0:
                count[0]++;
                break;
            case 1:
                count[1]++;
                break;
            case 2:
                count[2]++;
                break;
            }
        }
        nums.erase(nums.begin(), nums.end());
        nums.insert(nums.end(), count[0], 0);
        nums.insert(nums.end(), count[1], 1); 
        nums.insert(nums.end(), count[2], 2);
    }
};
// @lc code=end
