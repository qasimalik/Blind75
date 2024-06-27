/*
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target. 
You may assume that each input would have exactly one solution, 
and you may not use the same element twice. You can return the answer in any order. (TWO SUM)
*/

/**
 * Given an array of integers nums and an integer target, 
 * return indices of the two numbers such that they add up to target. 
 * You may assume that each input would have exactly one solution, 
 * and you may not use the same element twice. You can return the answer in any order. (TWO SUM)
 *
 * @param nums The array of integers
 * @param target The target integer
 *
 * @return A vector of integers containing the indices of the two numbers that add up to the target
 *
 * @throws None
 */
vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for(int i =0; i<nums.size(); ++i){
        int complement = target - nums[i];
        if(numMap.find(complement) != numMap.end()){
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {};
}