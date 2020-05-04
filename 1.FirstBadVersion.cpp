class Solution
{
public:
    int firstBadVersion(int n)
    {
        bool version = 0;
        int i;
        for (i = n; i > 0; --i)
        {
            version = isBadVersion(i);
            if (version == 0)
            {
                break;
            }
        }
        return (i + 1);
    }
};
