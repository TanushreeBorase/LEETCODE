class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        sort(num1.begin(),nums1.end());
        sort(num2.begin(),num2.end());
        int last = -1;
        while(i<num1.size() && j<num2.size){
            if(nums1[1]==num2[i]){
                v.push_back(nums1[i]);
                last = num1[i];
            }
            i++;
            j++;
        }elseif(nums1[i]>nums2[j]){
            j++;
        }else{
            i++;
        }
    }
    return v;
    }
};
