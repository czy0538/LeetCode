/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int k = m + n - 1;
        for (--m, --n; k >= 0 && n >= 0 && m >= 0; --k)
        {
            if (nums1[m] < nums2[n])
            {
                nums1[k] = nums2[n--];
            }
            else
            {
                nums1[k] = nums1[m--];
            }
        }
        //num1如果有剩余那这个题就结束了
        // for (; m >= 0 && k >= 0; --k, --m)
        // {
        //     nums1[k] = nums1[m];
        // }
        for (; n >= 0 && k >= 0; --k, --n)
        {
            nums1[k] = nums2[n];
        }
    }
};
// @lc code=end
