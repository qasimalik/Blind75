/*
Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.
*/

/**
* Determines if any value in the given integer array appears at least twice.
*
* @param nums The integer array to check for duplicates.
*
* @return True if any value appears at least twice, false otherwise.
*/
bool containsDuplicate(vector<int>& nums) {
    std::unordered_set<int> seen;
    for(int num: nums){
        if(seen.find(num)!= seen.end(num)){
            return true;
        }
        seen.insert(num);
    }
    return false;
}
