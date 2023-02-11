#include<bits/stdc++.h>
using namespace std;

void printPowerSet(vector<char> x, int n) {
    int power = pow(2, n);

    for (int i = 0; i < power; i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                cout << x[j];
            }
        }
        cout << " ";
    }
}

int main()
{
    vector<char> set = {'a','b','c'};
    printPowerSet(set, 3);
    return 0;
}