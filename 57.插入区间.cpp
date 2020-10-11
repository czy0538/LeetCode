/*
 * @lc app=leetcode.cn id=57 lang=cpp
 *
 * [57] 插入区间
 */
#include<bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
    {
        vector<vector<int>> result;
        int i = 0, left = newInterval[0], right = newInterval[1];
        while (i < intervals.size() && left > intervals[i][1])
            result.push_back(intervals[i++]);
        if (i == intervals.size())
        {
            result.push_back(newInterval);
            return result;
        }

        if (left == right)
            result.push_back(newInterval);
        else
        {
            if (left < intervals[i][0])
                result.push_back(newInterval);
            else
            {
                result.push_back(intervals[i]);
                ++i;
            }
        }

        int j = i;
        for (; i < intervals.size(); ++i)
        {
            if (result[j][1] >= intervals[i][0])
                result[j][1] = max(intervals[i][1], result[j][1]);
            else
            {
                result.push_back(intervals[i]);
                ++j;
            }
        }
        return result;
    }
};
// @lc code=end
