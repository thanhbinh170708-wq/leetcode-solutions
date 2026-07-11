    void returnstring(int n, string s, string ans, vector<string>& lists)
    {
    if (n == 4)
    {
        ans.pop_back();
        lists.push_back(ans);
        return;
    }    
    else
    {
        string tempans="";
        int count = 0;
        int max = 3;
        int dem = 1;
        int min = 1;
        if (s.size() -(4-n)-(ans.size()-n) +1 < max)
        {
            max = s.size()-(4-n)-(ans.size() -n)+1;
        }
        if (min < (s.size() - (ans.size()-n)-(4-n-1)*3))
        {
            min = s.size() -(ans.size()- n) -(4-n-1)*3;
        }
        
        while (dem <= max)
        {
            if (dem >= min)
            {
                tempans += s[ans.size() - n+dem-1];     
                
                
                int tempint = stoi(tempans);
                if (tempans.size() == 1 && tempans[0] =='0')
                { 
                    if (dem >= min)
                        returnstring(n+1,s,ans+tempans[0]+".",lists);
    
                }
                else if((tempans.size() ==3 && tempint > 255) || (tempans.size() != 1 && tempans[0] == '0'))
                {
                    return;  
                }
                else
                {
                    if (dem >= min)
                        returnstring(n+1,s,ans+tempans+".",lists);

                }
                if (dem == max)
                {
                    tempans = "";
                }
                dem++;
            }
            else
            {
                tempans += s[ans.size() -n +dem -1];
                dem++;
            }
        }

    }
    } 
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
    vector<string> t;
    string a;
    if (s.size() < 3 ||s.size() >12)
    {
        return t;
    }
    returnstring(0,s,a,t);
    return t;
        
    }
};