class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
/*
This line defines a function named removeDuplicates which takes a reference to a vector of integers nums as its
parameter. Here's what each part of the line means:

int: This specifies the return type of the function. In this case, it's returning an integer, which could represent
something like the new size of the vector after removing duplicates.

removeDuplicates: This is the name of the function. It's the identifier that you would use to call this 
function in your code.

vector<int>& nums: This part defines the parameter that the function takes. Let's break it down further:

vector<int>: This specifies the type of the parameter. In this case, it's a vector of integers. 
A vector is a dynamic array in C++ that can resize itself automatically as elements are added or removed.

&: This indicates that nums is passed by reference rather than by value.
Passing by reference means that the function can modify the original vector passed to it,
rather than working on a copy. This is more efficient than passing by value, especially for large data 
structures like vectors, because it avoids making a copy of the vector.

nums: This is the name of the parameter. Inside the function, you can refer to the vector using this name.
the function returns j, which is the length of the new array.
*/
