#include<bits/stdc++.h>
using namespace std;

void mergeSortedArray(vector<int> &arr1, vector<int> &arr2) {
    int n = arr1.size(), m = arr2.size();
    int i = 0, j = 0, k = n - 1;
 
    // Until i less than equal to k
    // or j is less than m
    
    while (i <= k && j < m) {
        if (arr1[i] < arr2[j])
            i++;
        else {
            swap(arr2[j], arr1[k]);
            j++, k--;
        }
    }
 
    // Sort first array
    sort(arr1.begin(), arr1.end());
 
    // Sort second array
    sort(arr2.begin(), arr2.end());
}

int main()
{
    vector<int> a = {1, 3, 5, 6, 6};
    vector<int> b = {2, 3, 4, 7, 8, 9};

    mergeSortedArray(a, b);

    for (int value: a) {
        cout << value << " ";
    }
    cout << endl;
    for (int value: b) {
        cout << value << " ";
    }
    return 0;
}
