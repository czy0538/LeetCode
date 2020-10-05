/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if (intervals.size() <= 1)
            return intervals;
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end(), MyComp);//排序
        result.push_back(*intervals.begin());//将首元素放入
        int j = 0;//结果指针，指向结果的尾元素
        for (int i = 1; i < intervals.size(); ++i)
        {
            if(intervals[i][0]>result[j][1])//无法合并
            {
                result.push_back(intervals[i]);
                ++j;
            }
            else//合并
            {
                if(intervals[i][1]>result[j][1])//判断哪个尾元素更大
                {
                    result[j][1] = intervals[i][1];
                }
            }
        }
        return result;
    }
    static bool MyComp(const vector<int> &a, const vector<int> &b)//自定义comp函数
    {
        return (a.at(0) < b.at(0));
    }
};
// @lc code=end
