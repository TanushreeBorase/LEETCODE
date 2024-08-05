class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mymap;
        vector<string>ans;
        for(const string&s : arr){
            mymap[s]++;
        }
        for(const string&s:arr) 
        // This loop iterates over each string s in arr and increments its count in mymap.
        {
            if(mymap[s] == 1){
                ans.push_back(s);
            // This loop iterates over each string s in arr again.
            // If the count of s in mymap is 1 (meaning it is distinct), s is added to the ans vector.
            }
        }
        if(k>0 && k<= ans.size()){
            return ans[k-1];
        // This checks if k is a valid index (1-based) within the ans vector.
        // If valid, it returns the k-th distinct string (remembering to adjust for 0-based indexing with k-1).
        // If not valid (e.g., k is larger than the number of distinct strings or less than 1), it returns an empty string.
        }
        return "";
    }
};
/*
mymap: This is an unordered map (hashmap) used to count the frequency of each string in the list.
ans: This is a vector that will store the distinct strings (those that appear exactly once).
