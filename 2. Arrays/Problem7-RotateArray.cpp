#include<bits/stdc++.h>
using namespace std;

// Helper Function

void reverseArray(vector<int> &x, int S, int E) {
    for (int i = S, j = E; i < j && j > i; i++, j--) {
        swap(x[i], x[j]);
    }
}

// Optimised Approch for K Elements
void rotateArrayCyclical(vector<int> &x, int k) {
    int n = x.size();
    k = k % n;

    reverseArray(x, 0, n - 1);
    reverseArray(x, 0, k - 1);
    reverseArray(x, k, n);
}

// Brute Force
void rotateArray(vector<int> &x) {
    int n = x.size();
    int lastElement = x[n - 1];
    for (int i = n - 1; i > 0; i--) {
        x[i] = x[i - 1];
    }
    x[0] = lastElement;
}

int main()
{
    vector<int> x = {1, 2, 3, 4, 5};
    rotateArrayCyclical(x, 3);

    for (int values: x) {
        cout << values << " ";   
    }
    return 0;
}