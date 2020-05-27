/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */
#include <bits\stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (!needle.size())
            return 0;
        if (!haystack.size())
            return -1;
        //???pattern
        int j = -1, i = 0; //j????i???
        vector<int> b(needle.size() + 1);
        b[i] = j;
        while (i < needle.size())
        {
            while (j >= 0 && needle[i] != needle[j])
                j = b[j];
            i++, j++;
            b[i] = j;
        }

        j = 0, i = 0; //j???text?? i?pattern?
        while (j < haystack.size())
        {
            while (i >= 0 && needle[i] != haystack[j])
                i = b[i];
            i++, j++;
            if (i == needle.size())
            {
                return j - needle.size();
            }
        }
        return -1;
    }
};
// @lc code=end
