// Using Two Pointers Approach
#include<bits/stdc++.h>
using namespace std;

int movingElements(int a[], int n) {
    int start = 0; int end = n - 1;
    while (start <= end) {
        if (a[start] < 0) {
            start++;
        } else if (a[end] > 0) {
            end--;
        } else if (a[start] > 0) {
            swap(a[start], a[end]);
            end--;
        } else if (a[end] < 0) {
            swap(a[start], a[end]);
            start++;
        }
    }
}

int main()
{
    int a[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(a)/sizeof(a[0]);
    movingElements(a, n);
    for (int value: a) {
        cout << value << " ";
    }
    return 0;
}