#include<bits/stdc++.h>
using namespace std;

void printKthMin(int a[], int n, int k) {
    // For minimum we sort array in ascending order
    sort(a, a + n);
    cout << "Minimum Kth : " << a[k - 1];
} 

int main()
{
    int a[] = {7, 10, 4, 20, 15};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 4;
    printKthMin(a,n,k);
    return 0;
}