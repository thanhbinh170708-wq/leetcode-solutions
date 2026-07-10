    void swapchar(vector<char>& s ,int left , int right)
    {
        if (left >= right)
            return;
        else 
        {
            swap(s[left],s[right]);
            swapchar(s,left+1,right-1);
        }
    }
class Solution {
public:
    void reverseString(vector<char>& s) {
    swapchar(s,0,s.size()-1);
    }
};