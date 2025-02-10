class Solution
{
public:
    string clearDigits(string s)
    {
        string stk;
        for (char c : s)
        {
            if (isdigit(c))
            {
                if (!stk.empty())
                {
                    stk.pop_back();
                }
            }
            else
            {
                stk.push_back(c);
            }
        }
        return stk;
    }
};