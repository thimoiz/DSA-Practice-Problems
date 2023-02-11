#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n) {
    if (n <= 0) return false;

    while (n > 1) {
        if (n & 1 != 0) return false;
        n >>= 1;
    }
    
    return true;
}

int main()
{
    cout << powerOfTwo(32);

    return 0;
}