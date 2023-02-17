class Solution
{
public:
    int integerReplacement(int n)
    {
        int64_t m = static_cast<int64_t>(n);
        int count = 0;
        while (m > 1)
        {
            if (m % 2 == 0)
            {
                m /= 2;
            }
            else
            {
                if ((m - 1) / 2 == 1 || ((m - 1) / 2) % 2 == 0)
                {
                    m -= 1;
                }
                else
                {
                    m += 1;
                }
            }
            count++;
        }
        return count;
    }
};