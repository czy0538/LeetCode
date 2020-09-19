/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{

public:
    int maxSubArray(vector<int> &nums)
    {
        return maxSubArray(nums, 0, nums.size() - 1);
    }
    int maxSubArray(vector<int> &nums, int l, int r)
    {
        if (l >= r)
        {
            return nums[r];
        }

        int m = (l + r) / 2;
        int mid = nums[m];
        int midl = mid, midr = mid, midall = mid, left = mid, right = mid;
        if (m + 1 <= r)
        {
            midall += nums[m + 1];
            midr = midall;
        }
        if (m - 1 >= l)
        {
            midall += nums[m - 1];
            midl += nums[m - 1];
        }
        int leftt = maxSubArray(nums, l, m - 1);
        int rightt = maxSubArray(nums, m + 1, r);
        left = max(leftt + mid, leftt);
        right = max(rightt + mid, rightt);
        return max(mid, max(midl, max(midr, max(midall, max(left, right)))));
    }
};
// @lc code=end
