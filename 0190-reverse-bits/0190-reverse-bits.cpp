class Solution {
public:
    int reverseBits(int n) {
    int a[32];
    for (int i = 0 ; i < 32; i++)
    {
        a[i] = n % 2;
        n = n/2 ;
    }
    int sum = 0;
    for (int i = 0; i < 32; i++)
    {
        sum += a[31-i] * pow(2,i);
    }
    return sum;
    }
};