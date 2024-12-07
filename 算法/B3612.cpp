#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s, int x = 0)
    {
        char *ss = (char *)malloc(s.size());
        char *sss = (char *)malloc(s.size());
        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
            {
                if (isupper(s[i]))
                {
                    ss[x++] = tolower(s[i]);
                }
                else
                {
                    ss[x++] = s[i];
                }
            }
        }
        for (int i = strlen(ss) - 1; i >= 0; i--)
        {

        }
    }
};