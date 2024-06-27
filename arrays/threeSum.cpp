/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets. 
*/

/**
* Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] 
* such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
* Notice that the solution set must not contain duplicate triplets. 
*
* @param nums the input integer array
* @return a vector of vectors containing the triplets that satisfy the conditions
*/
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i = 0; i < n; i++){
        if(i>0 && nums[i] == nums[i-1]){
            continue;
        }
        int j = i+1;
        int k = n-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];

            if(sum > 0){
                k--;
            } else if (sum < 0){
                j++;
            } else {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                result.push_back(temp);
                j++;
                k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return result;
}
