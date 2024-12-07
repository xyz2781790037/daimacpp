#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(string s,int left = 0,int right = 0)
    {
        string ss;

        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
            {
                if (isupper(s[i]))
                {
                    ss += tolower(s[i]);
                }
                else
                {
                    ss += s[i];
                }
            }
        }
        right = ss.size() - 1;
        while (left < right)
        {
            if(ss[left] != ss[right])
            {
                return false;
            }
        }
        return true;
    }
};
int main(){
    string s = "A man, a plan, a canal: Panama";
    Solution p;
    p.isPalindrome(s);
}