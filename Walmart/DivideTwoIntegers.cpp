class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN){
        if(divisor==-1) return INT_MAX;
        else if(divisor==1)  return dividend;
        else return ((divisor&1)==1)?divide(dividend+1,divisor):divide(dividend>>1,divisor>>1);
    } 
    if(divisor==INT_MIN) return 0;
        long d = labs(dividend), s = labs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while (d >= s) 
        {   long temp = s, m = 1;
            while (temp << 1 <= d) 
            {
                temp <<= 1;
                m <<= 1;
            }
            d -= temp;
            ans += m;
        }
        return sign * ans; 
    }
};
© 2022 GitHub, Inc
