    void sumlist(int k, int n, vector<int> lists, vector<vector<int>>& ans)
    {
        if (lists.size() == k)
        {
            ans.push_back(lists);
            return;
        }
        else if(lists.size() != k-1)
        {
            int max = 0;
            int sum = 0;
            int dem = 1;
            if (lists.size() != 0)
            {
                max = lists.back();
                sum = std::accumulate(lists.begin(),lists.end(),0);
            }
            int numberleft = (k - lists.size());
            while((max+dem) * numberleft <= n - sum - (((numberleft-1)*numberleft)/2))
            {
                if (max + dem <= 9)
                {
                    lists.push_back(max+dem);
                    sumlist(k,n,lists,ans);
                    lists.pop_back();
                    dem++;
                }
                else
                {
                dem++;
                }

            }
        }
        else
        {
            int sum = std::accumulate(lists.begin(),lists.end(),0);
            if (n-sum <= 9)
            {
                lists.push_back(n-sum);
                sumlist(k,n,lists,ans);
                lists.pop_back();
            }
            else
            {
                return;
            }



        }
            
        
    }
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> a;
    vector<vector<int>> b;
    if (k > n )
        return b;
    else
    {
        sumlist(k,n,a,b);
        return b;
    }}
};