// Finding Duplicates in N + 1 integers

#include<bits/stdc++.h>
using namespace std;

vector<int> duplicates(vector<int> &nums) {
    int n = nums.size();
    vector<int> res;

    for (int i = 0; i < n; i++) {
        int element = abs(nums[i]);

        if (nums[element - 1] > 0) {
            nums[element - 1] *= -1;
        } else {
            res.push_back(element);
        }
    }

    return res;
}

int main()
{
    vector<int> nums = {2, 4, 6, 2, 3, 5, 3};
    vector<int> res = duplicates(nums);

    for (int values: res) {
        cout << values << " ";
    }

    return 0;
}