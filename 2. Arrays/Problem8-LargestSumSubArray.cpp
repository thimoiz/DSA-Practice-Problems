#include<bits/stdc++.h>
using namespace std;

int largestSum(vector<int> x) {
    int n = x.size();
    int res = x[0];
    int tSum = x[0];
    for (int i = 1; i < n; i++) {
        tSum += x[i];

        if (tSum < x[i]) {
            tSum = x[i];
        }

        res = max(tSum, res);
    }

    return res;
}

int main()
{
    vector<int> x = {1,2,3,-2,5};
    int res = largestSum(x);
    cout << res;
    return 0;
}