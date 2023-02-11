#include<bits/stdc++.h>
using namespace std;

int countBits(int x) {
    int count = 0;
    while (x != 0) {
        x &= x - 1;
        count++;
    }
    return count;
}

int main()
{
    int value = 10, val2 = 2, val3= 5;
    cout << countBits(value) << " " << countBits(val2) << " " << countBits(val3);
    return 0;
}