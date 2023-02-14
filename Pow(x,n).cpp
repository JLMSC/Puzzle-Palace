class Solution
{
public:
    double myPow(double x, int n)
    {
        if (x == 1)
        {
            return 1;
        }
        if (x == -1)
        {
            if (n % 2 == 0)
            {
                return 1;
            }
            return -1;
        }
        if (n == 0)
        {
            return 1;
        }
        else if (n <= -INT_MAX)
        {
            return 0;
        }
        double resultPow = x;
        for (int i = 1; i < abs(n); i++)
        {
            resultPow *= x;
        }
        if (n < 0)
        {
            return 1.0 / resultPow;
        }
        return resultPow;
    }
};