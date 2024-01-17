/* HashSet for Checking Uniqueness:
A HashSet named set is created using the values from the map.
This is done to check for uniqueness, as a HashSet only allows unique values.

Check if Occurrences are Unique:
The method returns true if the size of the map (number of unique values in the array) is equal to
the size of the set (number of unique counts of occurrences). This indicates that each unique value
in the array has a unique count of occurrences.
*/

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> map;
        for (int val : arr) {
            map[val] = map[val] + 1;
        }

        std::unordered_set<int> set;
        for (const auto& entry : map) {
            set.insert(entry.second);
        }

        return map.size() == set.size();
    }
};
