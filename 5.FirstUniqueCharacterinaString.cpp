// Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

// Examples:

// s = "leetcode"
// return 0.

// s = "loveleetcode",
// return 2.
// Note: You may assume the string contain only lowercase letters.

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> ch(128, 0);
        for (int c = 0; c < s.length(); c++)
        {
            ch[s[c]]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (ch[s[i]] == 1)
                return i;
        }
        return -1;
    }
};