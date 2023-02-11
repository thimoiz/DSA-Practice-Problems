// Using Dutch Flags Algorithm ==> Sort 0s 1s and 2s
#include<bits/stdc++.h>
using namespace std;

void sorting(int nums[], int n) {
    int low = 0, mid = 0;
    int high = n - 1;
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else if (nums[mid] == 2) {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    int a[] = {2,0,1,2,0,1,2,0};
    int n = sizeof(a)/sizeof(a[0]);
    sorting(a,n);
    for(int value: a) {
        cout << value << endl;
    }
    return 0;
}