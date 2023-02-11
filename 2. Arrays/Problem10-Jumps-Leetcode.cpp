#include<bits/stdc++.h>
using namespace std;

int minJumps(vector<int>& nums) {
    int n = nums.size();
    
    // Edge case: return 0 if the input vector has fewer than or equal to 1 elements
    if (n <= 1) return 0;
    
    // `maxReachable` stores the maximum index that can be reached from the current position
    int maxReachable = nums[0];
    
    // `steps` stores the number of steps remaining to reach the next jump point
    int steps = nums[0];
    
    // `jumps` stores the total number of jumps required to reach the end of the vector
    int jumps = 1;
    
    for (int i = 1; i < n; i++) {
        // Update `maxReachable` to the maximum between its current value and `i + nums[i]`
        maxReachable = max(maxReachable, i + nums[i]);
        
        // Decrement `steps` by one in each iteration to represent the number of steps taken
        steps--;
        
        // If `steps` reaches zero, it means that the current position `i` is the next jump point
        if (steps == 0) {
            // Increment `jumps` by one for each jump
            jumps++;
            
            // Update `steps` to be `maxReachable - i`, which represents the number of steps to reach the next jump point
            steps = maxReachable - i;
        }
    }
    
    return jumps;
}


int main() {
    vector<int> nums = {2, 3, 1, 1, 4};
    int result = minJumps(nums);
    cout << "Minimum number of jumps: " << result << endl;
    
    return 0;
}