#include<bits/stdc++.h>
using namespace std;

int minimizeHeightDiff(vector<int> a, int n, int k) {
    // Sorting Array
    sort(a.begin(), a.end());
    // Variables
    int maxEl, minEl;
    int res = a[n - 1] - a[0]; // b - a

    for (int i = 1; i <= n - 1; i++) {
        if (a[i] >= k) {
            maxEl = max(a[i - 1] + k, a[n - 1] - k);
            minEl = min(a[0] + k, a[i] - k);

            res = min(res, maxEl - minEl);
        }
    }
    return res;
}

int main()
{
    vector<int> a = {3, 9, 12, 16, 20};
    int n = a.size();
    cout << minimizeHeightDiff(a, n, 3);

    return 0;
}