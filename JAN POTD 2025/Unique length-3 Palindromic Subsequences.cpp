class Solution {
public:
    int countPalindromicSubsequence(string s) {
        char c[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        int a = 0, t = 0;

        int l, r;
        for (char x : c) {
            for (l = 0; l < s.length() && s[l] != x; l++);
            if (l == s.length()) continue;
            for (r = s.length() - 1; r >= 0 && s[r] != x; r--);
            if (l >= r) continue;

            vector<bool> v(128, false);
            t = 0;
            for (int i = l + 1; i < r; i++) {
                if (!v[s[i]]) {
                    v[s[i]] = true;
                    t++;
                    if (t == 26) break;
                }
            }
            a += t;
        }
        return a;
    }
};

/*
The problem asks for the count of unique palindromes of length three that are subsequences of the given string s. A palindrome of length three has the form "aba". To count these palindromes, the solution seems to iterate through the string, finding the first and last occurrences of each character and checking the characters in between.

Approach
Iterate through each character from 'a' to 'z'.
For each character, find the first and last occurrence in the string s.
If the first occurrence is not found, move to the next character.
If the first occurrence is found, iterate from the next index to the last occurrence.
For each character in between, mark it as visited to avoid duplicate counting.
Increment a counter for unique characters.
If the counter reaches 26 (the total number of lowercase English letters), break the loop to avoid unnecessary iterations.
Add the counter value to the total count.
Complexity
Time complexity: O(N)
The solution iterates through the string once for each character, and the inner loop iterates through the characters between the first and last occurrences.

Space complexity: O(1)
The solution uses a constant amount of space for the boolean array v and some variables, independent of the input size.

*/
