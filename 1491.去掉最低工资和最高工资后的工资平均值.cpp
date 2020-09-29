/*
 * @lc app=leetcode.cn id=1491 lang=cpp
 *
 * [1491] 去掉最低工资和最高工资后的工资平均值
 */

// @lc code=start
class Solution
{
public:
    double average(vector<int> &salary)
    {
        double max = 0, min = (numeric_limits<double>::max)(), sum = 0;
        for (const double &i : salary)
        {
            if (i > max)
                max = i;
            if (i < min)
                min = i;
            sum += i;
        }
        return (sum - max - min) / (salary.size() - 2);
    }
};
// @lc code=end
