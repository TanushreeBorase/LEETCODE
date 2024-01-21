/*You are a professional robber planning to rob houses along a street. 
Each house has a certain amount of money stashed, the only constraint stopping 
you from robbing each of them is that adjacent houses have security systems connected 
and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, return the maximum amount 
of money you can rob tonight without alerting the police.

Example 1:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.*/

#include <vector>
#include <algorithm>

class Solution {
public:
    int rob(std::vector<int>& nums) {
        // Initialize variables to represent the maximum amount of money robbed with and without
        // robbing the current house
        int rob = 0;    // Maximum amount of money robbed considering the current house
        int norob = 0;  // Maximum amount of money robbed without considering the current house

        // Iterate through each house
        for (int i = 0; i < nums.size(); i++) {
            // Calculate the maximum amount of money that can be robbed if the current house is robbed
            int newRob = norob + nums[i];
            
            // Calculate the maximum amount of money that can be robbed without robbing the current house
            int newNoRob = std::max(norob, rob);
            
            // Update the variables for the next iteration
            rob = newRob;
            norob = newNoRob;
        }

        // Return the maximum amount of money that can be robbed considering all houses
        return std::max(rob, norob);
    }
};
