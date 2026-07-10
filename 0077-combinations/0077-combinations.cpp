    void combining(int n,int k,vector<int> lists, vector<vector<int>>& ans)
    {
        if (lists.size() == k)
        {
            ans.push_back(lists);
            
            return;
        }
        else
        {
            int max = 0;
            int dem = 1;
            if (lists.size() != 0)
            {
                max = lists.back();
            }
            while(dem <= n - (k-lists.size())- max+1)
            {
                lists.push_back(max+dem);
                dem++;
                combining(n,k,lists,ans);
                lists.pop_back();
                
            }
        }
    }
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> a;
    vector<int>lists;
    combining(n,k,lists,a)  ;  
    return a;
    }
};