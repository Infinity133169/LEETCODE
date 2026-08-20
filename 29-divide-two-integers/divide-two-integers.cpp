class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == divisor)
            return 1;

        bool sign = true;

        if (dividend < 0 && divisor > 0)
            sign = false;

        if (dividend > 0 && divisor < 0)
            sign = false;

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        long long ans = 0;

        while (n >= d) {

            long long count = 0;

            while (n >= (d << (count + 1))) {
                count++;
            }

            ans += (1LL << count);

            n = n - (d << count);
        }

        if (sign) {
            if (ans > INT_MAX)
                return INT_MAX;

            return (int)ans;
        }
        else {
            if (ans > (long long)INT_MAX + 1)
                return INT_MIN;

            return (int)(-ans);
        }
    }
};