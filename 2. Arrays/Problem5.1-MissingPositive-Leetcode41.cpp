// Q : Find first missing positive number in array
// Approach is moving positive elements to its index

#include<bits/stdc++.h>
using namespace std;

int missingNumber(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        int currentIndex = nums[i] - 1; // suppose el is 3. has index = 2
        while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[currentIndex]) {
            swap(nums[currentIndex], nums[i]);
            currentIndex = nums[i] - 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    return n + 1;
}

int main()
{
    int a[] = {3, 4, -1, 1};
    int n = sizeof(a)/sizeof(a[0]);
    cout << missingNumber(a, n);
    return 0;
}