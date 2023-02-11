#include<bits/stdc++.h>
using namespace std;

int countBits(int a, int b) {
    int xr = a ^ b;
    int count = 0;
    while (xr != 0) {
        xr &= xr - 1;
        count++;
    }
    return count;
}

int main()
{
    int a = 10;
    int b = 15; 
    cout << countBits(a,b);
    return 0;
}