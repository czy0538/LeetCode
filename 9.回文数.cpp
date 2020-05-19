/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {
        stringstream ss;
        ss << x;
        string s;
        ss >> s;
        for (int i = 0; i < s.size() / 2; ++i)
        {
            if (s[i] != s[s.size() - 1 - i])
                return false;
        }
        return true;
    }
};
// @lc code=end
