/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    using LL = long long;
    int climbStairs(int n)
    {
        LL methods = 0;
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int x = n / 2;
        for (int i = 0; i <= x; ++i)
        {
            int y = n - 2 * i + 1;
            methods += C2(i + y - 1, y - 1);
        }
        return methods;
    }
    LL C(LL m, LL n)
    {
        if (n > m - n)
            n = m - n;
        LL a = 1, b = 1, mt = m, nt = n;

        for (int i = 0; i < n; ++i)
        {
            a *= (mt--);
            b *= (nt--);
        }
        return a / b;
    }
    int C2(int n, int k)
    {
        long long s = 1;
        int x = 1;
        if (k > n - k)
            k = n - k;
        for (int i = n; i > n - k; i--)
        {
            s *= i;
            s /= x;
            x++;
        }
        return (int)s;
    }
};
// @lc code=end
