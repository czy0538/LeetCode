/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        int val = 0;
        if (s.size() == 1)
            return char2num(s.at(0));
        for (int i = 0; i < s.size() - 1; i++)
        {
            switch (s.at(i))
            {
            case 'I':
                if (s.at(i + 1) == 'V' || s.at(i + 1) == 'X')
                    val -= 1;
                else
                    val += 1;
                break;
            case 'X':
                if (s.at(i + 1) == 'L' || s.at(i + 1) == 'C')
                    val -= 10;
                else
                    val += 10;
                break;
            case 'C':
                if (s.at(i + 1) == 'D' || s.at(i + 1) == 'M')
                    val -= 100;
                else
                    val += 100;
                break;

            default:
                val += char2num(s.at(i));
                break;
            }
        }
        val += char2num(s.at(s.size() - 1));
        return val;
    }

    int char2num(char c)
    {
        switch (c)
        {
        case 'I':
            return 1;
            break;
        case 'X':
            return 10;
            break;
        case 'C':
            return 100;
            break;
        case 'V':
            return 5;
            break;
        case 'L':
            return 50;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        }
        return 0;
    }
};
// @lc code=end
