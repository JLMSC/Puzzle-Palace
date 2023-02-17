class Solution {
public:
    string addBinary(string a, string b) {
        int aSize = a.size();
        int bSize = b.size();
        int carry = 0;
        string res;

        // Fill string with leading zeros (equal size to both strings).
        if (aSize < bSize)
        {
            a = string((bSize - aSize), '0').append(a);
            aSize = a.size();
        }
        else if (b.size() < a.size())
        {
            b = string((aSize - bSize), '0').append(b);
            bSize = b.size();
        }

        // Binary sum.
        for (int i = aSize - 1; i >= 0; i--)
        {
            res.insert(0, to_string((a[i] ^ b[i]) ^ carry));
            if (((a[i] == '1' || b[i] == '1') && carry == 1) || (a[i] == b[i] && b[i] == '1'))
            {
                carry = 1;
            }
            else if (carry != 0)
            {
                carry = 0;
            }
        }

        // Remaining carry over.
        if (carry != 0)
        {
            res.insert(0, "1");
        }
        return res;
    }
};