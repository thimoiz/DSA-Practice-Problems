#include<bits/stdc++.h>
using namespace std;

vector<int> setBits(int n) {
    vector<int> set(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        set[i] = set[ i >> 1 ] + (i & 1);
    }

    return set;
}

int main()
{
    int n = 15;
    vector<int> res = setBits(n);
    for(int values: res) {
        cout << values << " ";
    }
    return 0;
}