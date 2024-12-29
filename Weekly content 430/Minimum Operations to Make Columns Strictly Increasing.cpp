class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int totalOps = 0;

        for (int j = 0; j < n; ++j) {
            for (int i = 1; i < m; ++i) {
                if (grid[i][j] <= grid[i-1][j]) {
                    totalOps += (grid[i-1][j] - grid[i][j] + 1);
                    grid[i][j] = grid[i-1][j] + 1;
                }
            }
        }
        
        return totalOps; 
    }
};



/*
You are given a m x n matrix grid consisting of non-negative integers.

In one operation, you can increment the value of any grid[i][j] by 1.

Return the minimum number of operations needed to make all columns of grid strictly increasing.

 

Example 1:

Input: grid = [[3,2],[1,3],[3,4],[0,1]]

Output: 15

Explanation:

To make the 0th column strictly increasing, we can apply 3 operations on grid[1][0], 2 operations on grid[2][0], and 6 operations on grid[3][0].
To make the 1st column strictly increasing, we can apply 4 operations on grid[3][1].
*/
