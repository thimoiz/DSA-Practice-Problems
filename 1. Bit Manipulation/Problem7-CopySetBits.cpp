#include <bits/stdc++.h>
using namespace std;

int copySetBits(int x, int y, int left, int right) {
    int res = x;
    int i = left;

    while (i <= right) {
        // find bit at position of y
        int mask = y & (1 << (i - 1)); // indexing starts from zero
        res |= mask;
        i++;
    }

    return res;
}

int main() {
    int x = 15, y = 9, left = 2, right = 4;
    cout << copySetBits(x, y, left, right) << endl;
    return 0;
}
