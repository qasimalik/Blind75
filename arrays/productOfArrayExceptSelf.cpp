/*
Given an integer array nums, return an array answer such that 
answer[i] is equal to the product of all the elements of nums except nums[i]. 
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. 

Note: You must write an algorithm that runs in O(n) time and without using the division operation.
*/

/**
* Calculates the product of all elements in the given integer array `nums`, except for the element at index `i`.
*
* @param nums the input integer array
*
* @return a vector of integers, where the `i`-th element is the product of all elements in `nums`, except for `nums[i]`.
*
* @throws None
*/
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n);
    vector<int> right(n);
    vector<int> answer(n);
    left[0] = 1;
    for(int i =1; i<n; ++i){
        left[i] = left[i-1] * nums[i-1];
    }
    right[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        right[i] = right[i+1] * nums[i+1];
    }
    for(int i=0; i<n; i++){
        answer[i] = left[i] * right[i];
    }
    return answer;
}
