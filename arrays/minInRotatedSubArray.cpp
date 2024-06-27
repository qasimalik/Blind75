/*
Given the array nums after the possible rotation and an integer target, 
return the index of target if it is in nums, or -1 if it is not in nums.
*/


/**
 * Find the pivot index of a rotated sorted array.
 *
 * @param nums The input vector of integers representing the rotated sorted array
 * @param n The size of the input vector
 *
 * @return The index of the pivot element in the rotated sorted array
 */
int getPivot(vector<int>& nums, int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(nums[mid] >= nums[0]){
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

/**
 * Performs a binary search on a sorted vector of integers.
 *
 * @param nums the vector of integers to search
 * @param start the starting index of the search range
 * @param end the ending index of the search range
 * @param k the target value to search for
 *
 * @return the index of the target value in the vector, or -1 if the value is not found
 *
 * @throws None
 */
int binarySearch(vector<int>& nums, int start, int end, int k){
    int s = start;
    int e = end;
    int mid = s + (e-s)/2;

    while(s <= e){
        if(nums[mid]==k){
            return mid;
        } else if(k > nums[mid]){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

/**
* Searches for a target value in a rotated sorted array.
*
* @param nums the vector of integers to search
* @param target the target value to search for
*
* @return the index of the target value in the vector, or -1 if the value is not found
*
* @throws None
*/
int search(vector<int>& nums, int target) {
    int n = nums.size();
    int pivot = getPivot(nums, n);
    if(target >= nums[pivot] && target <= nums[n-1]){
        return binarySearch(nums, pivot, n-1, target);
    } else {
        return binarySearch(nums, 0, pivot-1, target);
    }
}
