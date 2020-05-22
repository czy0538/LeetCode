/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        //ed1 正序版本，感觉删除的时间复杂度太高了，改成倒着试试
        // if(nums.size()==0)
        // {
        //     return 0;
        // }
        // for(int i=0;i<nums.size()-1;)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         nums.erase(nums.begin()+i);
        //     }
        //     else
        //     {
        //         ++i;
        //     }

        // }
        // return nums.size();

        if(nums.empty())
        {
            return 0;
        }
        int i=nums.size()-1;
        while(i>0)
        {
            if(nums[i]==nums[i-1])
            {
                nums.erase(nums.begin()+i);
            }
            --i;
        }
        return nums.size();
    }
};
// @lc code=end
