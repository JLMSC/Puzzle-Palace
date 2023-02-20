class Solution {
public:
    int countDigitOne(int n)
    {
        int div;
        long long m = 1;
        int oneCount = 0;
        while (m <= n) {
            div = m * 10;
            oneCount += (n / div) * m + min(max(n % div - m + 1, 0LL), m);
            m *= 10;
        }
        return oneCount;
    };
};