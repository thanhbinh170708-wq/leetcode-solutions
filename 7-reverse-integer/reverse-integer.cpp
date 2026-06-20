#include <climits>
class Solution {
public:
    int reverse(int x) {
    int max = INT_MAX;
    bool positive = false;
    if (x == -2147483648)
    {
        return 0;
    }
    if (x > 0)
    {
        positive = true;
    }
    else 
    {
        x = -x;
        positive = false;
    }
    int a[10];
    int number = 0;
    while (x > 0)
    {
        a[number] = x%10;
        x = x/10;
        number++;
    }
    int real_result = 0;
    for (int i = 0; i < number; i++)
    {
        if (max - real_result < a[i]*pow(10,number-i-1))
        {
            return 0;
        }
        real_result += a[i] * pow(10,number-i-1);
    }
    if (positive)
    {
        return real_result;
    }
    else 
    {
        return -real_result;
    }
    }
};