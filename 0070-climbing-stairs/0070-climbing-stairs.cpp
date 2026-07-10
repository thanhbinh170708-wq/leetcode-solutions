class Solution {
public:
    int a[46] ={};
    
    int climbStairs(int n) {
    if (n == 1)
    {
        a[1] = 1;
        return 1;
    }    
    else if (n == 2)
    {
        a[2] = 2;
        return 2;
    }
    else if (a[n] != 0)
    {
        return a[n];
    }
    else
    {
        a[n] = climbStairs(n-1) + climbStairs(n-2);
        return a[n];
    }
    
    }
};