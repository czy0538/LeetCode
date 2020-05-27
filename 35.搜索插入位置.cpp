/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */
#include <bits\stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        int mid = (right + left) / 2;
        if (target <= nums[left])
            return 0;
        if (target > nums[right])
            return right + 1;
        while (left <= right)
        {
            if (target < nums[mid])
                right = mid - 1;
            else if (target > nums[mid])
                left = mid + 1;
            else
                return mid;
            mid = (left + right) / 2;
        }
        if (target < nums[mid])
            return mid;
        else
            return mid + 1;
    }
};
// @lc code=end
