class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string kStr = to_string(k);
        int kSize = kStr.size() - 1;
        int numSize = num.size() - 1;
        
        // Fill with "kSize - numSize" leading zeros.
        if (numSize < kSize)
        {
            for (int i = 0; i < (kSize - numSize); i++)
            {
                num.insert(num.begin(), 0);
            }
            numSize = num.size() - 1;
        }

        int sum = 0;
        int lastNumSize = numSize;
        while (k != 0)
        {
            // Sum current digit with current digit of k.
            sum = num[numSize] + (k % 10);
            
            // Check if there's a carry in the sum.
            if (sum >= 10)
            {
                // Add the carry until none left.
                while (sum != 0)
                {
                    if (numSize < 0) {
                        num.insert(num.begin(), (sum % 10));
                    } else {
                        num[numSize] = (sum % 10);
                    }
                    numSize--;
                    sum /= 10;
                    sum += numSize >= 0 ? num[numSize] : 0;
                }
                numSize = lastNumSize;
            } else {
                num[numSize] = sum;
            }

            numSize--;
            lastNumSize = numSize;
            k /= 10;
        }

        return num;
    }
};