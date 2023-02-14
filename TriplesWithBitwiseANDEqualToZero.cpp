class Solution
{
public:
    int countTriplets(vector<int> &nums)
    {
        int count = 0;
        unordered_map<int, int> doubleBitwise;

        // Pega primeiro a frequência (Bitwise AND) com os indices 'i' e 'j'.
        for (auto i : nums)
        {
            for (auto j : nums)
            {
                ++doubleBitwise[i & j];
            }
        }

        // Itera sobre a frequência (Bitwise AND do 'i' e 'j') com o suposto indice 'k'.
        // se (i & j & k) == 0; então count++;
        for (auto i : nums)
        {
            for (auto k : doubleBitwise)
            {
                if ((k.first & i) == 0)
                {
                    count += k.second;
                }
            }
        }

        return count;
    }
};