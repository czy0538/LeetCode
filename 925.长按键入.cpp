/*
 * @lc app=leetcode.cn id=925 lang=cpp
 *
 * [925] 长按键入
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isLongPressedName(string name, string typed)
    {
        if (name.size() > typed.size())
            return false;
        size_t count_n = 0, count_t = 0, i, j;
        for (i = 0, j = 0; i < name.size() && j < typed.size(); i++, j++)
        {
            while (i + 1 < name.size() && name[i] == name[i + 1])
            {
                ++i;
                ++count_n;
            }
            if (typed[j] != name[i])
                return false;
            while (j + 1 < typed.size() && typed[j] == typed[j + 1])
            {
                ++j;
                ++count_t;
            }
            if (count_n > count_t)
                return false;
            count_n = 0;
            count_t = 0;
        }
        if (i != name.size() || j != typed.size())
            return false;
        return true;
    }
};
// @lc code=end
