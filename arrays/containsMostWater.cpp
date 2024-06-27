/*
You are given an integer array height of length n. 
There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). 
Find two lines that together with the x-axis form a container, such that the container contains the most water. 
Return the maximum amount of water a container can store. 
Notice that you may not slant the container.
*/

/**
 * Calculates the maximum amount of water a container can store by finding two lines that together with the x-axis form a container, such that the container contains the most water.
 *
 * @param height a vector of integers representing the heights of the vertical lines.
 * @return the maximum amount of water a container can store.
 */
int maxArea(vector<int>& height) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n = height.size();
    int left = 0;
    int right = n-1;
    int maxArea = 0;


    while(left<right){
        int width = right-left;
        int currentHeight = min(height[left], height[right]);
        int currentArea = width * currentHeight;
        maxArea = max(maxArea, currentArea);

        if(height[left]<height[right]){
            left++;
        } else {
            right--;
        }
    }
    return maxArea;
}
