#include<bits/stdc++.h>
using namespace std;

// Find position of only set bit else return -1
// e.g 2 ==> 1 0 = 2 : 5 ==> 1 0 1 = -1
// Power of two has only set bit

int positionBit(int n) {
    if (n <= 0) return -1;
    int i = 0, count = 0;
    while (n > 0) {
        if ((n & 1) == 1) {
            count++;
            if (count > 1) return -1;
        }
        n >>= 1;
        i++;
    }
    return i;
}

int main()
{
    int n = 16;
    cout << positionBit(n);

    return 0;
}