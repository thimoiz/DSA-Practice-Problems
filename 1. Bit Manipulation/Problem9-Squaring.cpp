#include<bits/stdc++.h>
using namespace std;

int squareOfNumber(int n) {
    int temp = n;
    int power = 0, res = 0;

    while (temp) {
        if (temp & 1) {
            res += (n << power);
        }
        power++;
        temp >>= 1;
    }

    return res;
}

int main()
{
    cout << squareOfNumber(8);

    return 0;
}