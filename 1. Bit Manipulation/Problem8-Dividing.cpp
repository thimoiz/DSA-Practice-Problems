#include<bits/stdc++.h>
using namespace std;

int dividing(int dividend, int divisor) {
    bool sign = false;
    int ans = 0;

    if (dividend < 0 && divisor > 0) sign = true;
    if (dividend > 0 && divisor < 0) sign = true;

    int absDividend = abs(dividend);
    int absDivisor = abs(divisor);

    int shift = 0;

    while ((absDivisor << shift) <= absDividend) {
        shift++; 
    }

    shift--;

    for (int i = shift; i >= 0; i--) {
        if ((absDivisor << i) <= absDividend) {
            absDividend -= absDivisor << i;
            ans += 1 << i;
        }
    }

    if (sign) return -ans;
    return ans;
}

int main()
{
    int dividend = 99;
    int divisor = 11;
    cout << dividing(dividend, divisor);
    return 0;
}