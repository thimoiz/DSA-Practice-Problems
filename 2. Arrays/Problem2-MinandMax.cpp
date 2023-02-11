#include<bits/stdc++.h>
using namespace std;

void printMinMax(int a[],int n) {
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        } else if (a[i] > max) {
            max = a[i];
        }
    }
    cout << "Max : " << max << "\nMin: " << min;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(a)/sizeof(a[0]);
    printMinMax(a,n);
    return 0;
}