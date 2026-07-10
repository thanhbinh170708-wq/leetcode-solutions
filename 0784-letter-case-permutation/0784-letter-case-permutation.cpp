    void recursive(string s, int n, vector<string> &a)
    {
        if (n == s.size())
        {
            a.push_back(s);
            return;
        }
        else
        {
            if (isdigit(s[n]))
            {
                recursive(s,n+1, a);
            }
            else 
            {
                s[n] = tolower(s[n]);
                recursive(s,n+1,a);
                s[n] = toupper(s[n]);
                recursive(s,n+1,a);
            }
        }
    }
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
    vector<string>a;
    recursive(s,0,a);
    return a;
    }
};