#include<bits/stdc++.h>
using namespace std;

vector<int> Union(vector<int> x, vector<int> y) {
    // Pointers for both arrays
    int left = 0, right = 0;

    vector<int> uni;

    // Looping through Array
    while (left < x.size() && right < y.size()) {

        // Skip Duplication
        while (left > 0 && left < x.size() && x[left - 1] == x[left]) left++;

        while (right > 0 && right < y.size() && y[right - 1] == y[right]) right++;

        // Inserting Elements
        if (x[left] < y[right]) {
            uni.push_back(x[left]);
            left++;
        } else if (x[left] > y[right]) {
            uni.push_back(y[right]);
            right++;
        } else if (x[left] == y[right]) {
            uni.push_back(x[left]);
            left++;
            right++;
        }
    }

    // Remaining Length
    while (left < x.size()) {
        uni.push_back(x[left]);
        left++;
    }
    while (right < y.size()) {
        uni.push_back(y[right]);
        right++;
    }

    return uni;
}

vector<int> Intersection(vector<int> x, vector<int> y) {
    int left = 0, right = 0;
    vector<int> inter;

    while (left < x.size() && right < y.size()) {

        // Skip Duplication
        while (left > 0 && left < x.size() && x[left - 1] == x[left]) left++;

        while (right > 0 && right < y.size() && y[right - 1] == y[right]) right++;

        // Taking Elements

        if (x[left] < y[right]) {
            left++;
        } else if (x[left] > y[right]) {
            right++;
        } else {
            inter.push_back(x[left]);
            left++;
            right++;
        }
    }

    return inter;
}

int main()
{
    vector<int> x = {3, 4, 5};
    vector<int> y = {1, 2, 3, 4, 5};
    vector<int> res = Union(x, y);
    vector<int> res2 = Intersection(x, y);

    for (int value : res) {
        cout << value << " ";
    }
    cout << endl;
    for (int values : res2) {
        cout << values << " ";
    }
    return 0;
}
