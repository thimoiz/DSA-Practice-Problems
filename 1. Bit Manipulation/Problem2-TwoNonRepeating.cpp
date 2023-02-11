#include<bits/stdc++.h>
using namespace std;

vector<int> nonRepeating(vector<int> x) {
    int xr = 0;
    for (int i = 0; i < x.size(); i++) {
        xr = xr ^ x[i];
    }

    int rmsb = xr & -(xr);
    int a = 0;
    int b = 0;

    for (int i = 0; i < x.size(); i++) {
        if (x[i]&rmsb) {
            a ^= x[i];
        } else {
            b ^= x[i];
        }
    }

    vector<int> res = {a, b};
    return res;
}

int main()
{
    vector<int> x = {1,1,2,3,3,4,5,5};
    vector<int> res = nonRepeating(x);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}