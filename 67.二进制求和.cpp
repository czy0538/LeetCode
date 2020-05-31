/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution
{
public:
    stack<char> ans;
    bool in = false;
    string addBinary(string a, string b)
    {
        size_t as = a.size() - 1;
        size_t bs = b.size() - 1;
        while (as < -1 && bs < -1)
        {

            cal(a[as], b[bs]);
            --as;
            --bs;
        }
        while (as < -1)
        {
            cal(a[as], '0');
            --as;
        }
        while (bs < -1)
        {
            cal(b[bs], '0');
            --bs;
        }
        if (in)
        {
            ans.push('1');
        }
        string temp;
        while (!ans.empty())
        {
            temp.push_back(ans.top());
            ans.pop();
        }
        return temp;
    }
    void cal(char a, char b)
    {
        if (a == '0' && b == '0')
        {
            if (in)
            {
                ans.push('1');
                in = false;
            }
            else
                ans.push('0');
        }
        else if (a == '1' && b == '1')
        {
            if (in)
            {
                ans.push('1');
            }
            else
            {
                ans.push('0');
                in = true;
            }
        }
        else
        {
            if (in)
            {
                ans.push('0');
                in = true;
            }
            else
                ans.push('1');
        }
    }
};
// @lc code=end
