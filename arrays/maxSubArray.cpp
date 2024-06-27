/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.
*/

/**
* Finds the subarray with the largest sum in the given vector of integers and returns its sum.
*
* @param nums The vector of integers.
*
* @return The sum of the subarray with the largest sum.
*/
//Also Kadane Algorithm
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    int maxi = nums[0];
    for(int i = 0; i < n; i++){
        sum = sum + nums[i];
        maxi = max(maxi, sum);
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}
