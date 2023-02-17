class Solution
{
public:
    double average(vector<int> &salary)
    {
        // Remove min value from vector.
        salary.erase(
            std::find(
                salary.begin(),
                salary.end(),
                *min_element(
                    salary.begin(),
                    salary.end())));
        // Remove max value from vector.
        salary.erase(
            std::find(
                salary.begin(),
                salary.end(),
                *max_element(
                    salary.begin(),
                    salary.end())));
        // Sum up every value in vector and divide it by its size.
        return std::reduce(salary.begin(), salary.end()) / (salary.size() * 1.0);
    }
};