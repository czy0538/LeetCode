/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans = "";
        int p = 0;
        if (strs.size() == 0)//处理整个strs为空
            return ans;
        while (true)
        {
            for (int i = 0; i < strs.size(); ++i)
            {
                if (p >= strs[i].size())
                {
                    return ans;
                }
                if (p < strs[(i + 1) % strs.size()].size() && strs[i].at(p) == strs[(i + 1) % strs.size()].at(p))
                    continue;
                else
                    return ans;
            }
            ans.push_back(strs[0].at(p));
            ++p;
        }
        return ans;
    }
};
// @lc code=end
