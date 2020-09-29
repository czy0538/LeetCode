/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        //方法一
        // if (s.size() != t.size())
        //     return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if (s != t)
        //     return false;
        // return true;

        //方法二
        if (s.size() != t.size())
            return false;
        int alphbat[26] = {0};
        for (const char &i : s)
        {
            alphbat[i - 'a']++;
        }
        for (const char &i : t)
        {
            if ((--alphbat[i - 'a']) < 0)
                return false;
        }
        return true;
    }
};
// @lc code=end
