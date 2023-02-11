#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(a[0]);

    reverseArray(a, n);

    for(auto value: a) {
        cout << value << endl;
    }
}