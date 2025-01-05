class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n + 1, 0);

        for (auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            diff[start] += (direction == 1) ? 1 : -1;
            diff[end + 1] -= (direction == 1) ? 1 : -1;
        }

        int currentShift = 0;
        for (int i = 0; i < n; i++) {
            currentShift += diff[i];
            int shifted = (s[i] - 'a' + currentShift) % 26;
            if (shifted < 0) shifted += 26; 
            s[i] = 'a' + shifted;
        }

        return s;
    }
};

/*

The line sweep algorithm is an efficient algorithmic technique commonly used to solve problems involving ranges, intervals, or continuous modifications over a sequence of elements. The algorithm processes events (e.g., start or end of a range) in a linear fashion and updates the state incrementally.

Core Concept of the Line Sweep Algorithm:
Difference Array:
A difference array is used to efficiently apply range updates.
Increment or decrement values at the endpoints of the ranges, and calculate the cumulative effect using a prefix sum.
Event Handling:
Events (e.g., adding or subtracting values) are processed in order, ensuring the algorithm runs in linear or near-linear time.
Key Application:
The algorithm can determine the impact of overlapping ranges or resolve problems like range queries, interval overlaps, or cumulative effects over a sequence.

  The problem involves applying multiple shifts to a string, where each shift affects a contiguous range of characters. By using a difference array and prefix sums (the essence of the line sweep algorithm), we can efficiently compute the net shift for each character in linear time.

Approach
Use a difference array to record the direction and magnitude of shifts for the specified ranges.
Traverse the string to compute the cumulative shifts using a prefix sum.
Adjust the characters in the string based on their computed shifts:
Use modular arithmetic to handle wraparounds.
Handle negative shifts properly (e.g., wrap around the alphabet backward).
Construct the final shifted string using the updated character positions.
Complexity
Time Complexity:
O(n+m), where n is the length of the string and m is the number of shifts. Processing shifts and computing the prefix sum both run in linear time.
Space Complexity:
O(n) for the difference array.

  */
