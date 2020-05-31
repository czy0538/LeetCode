/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */
#include <bits\stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int len = s.size();
        if (len == 0)
            return 0;
        bool flag = false;
        int end=len-1;
        while(end>=0&&s[end]==' ')
        {
            --end;
        }
        if(end<0)
        {
            return 0;
        }
        for (size_t i = end - 1; i < -1; --i)
        {
            if (s[i] == ' ')
                return end-i;
        }
        return end+1;
    }
};
// @lc code=end
