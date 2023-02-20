class Solution {
public:
    int reverse(int x) {
        int n = x;
        long long res = 0;
        unsigned int sizeOfX = 0;
        while (n) {
            ++sizeOfX;
            n /= 10;
        }

        while (x != 0) {
            if (res > INT_MAX || res < INT_MIN) {
                return 0;
            }
            res += pow(10, sizeOfX - 1) * (x % 10);
            --sizeOfX;
            x /= 10;
        }
        return res;
    }
};