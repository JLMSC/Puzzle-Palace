class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        // all letters are capitals.
        if (regex_match(word, regex("[A-Z]+")))
        {
            return true;
        }

        // all letters are not capitals.
        if (regex_match(word, regex("[a-z]+")))
        {
            return true;
        }

        // only the first letter is capital.
        if (regex_match(word, regex("[A-Z][a-z]+")))
        {
            return true;
        }

        // invalid.
        return false;
    }
};