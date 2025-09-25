Time Complexity:O(n log(sum of array elements)), due to binary search and linear helper function.

Space Complexity:O(1), excluding the input array, as only constant extra space is used.

```cpp
class Solution {
public:
    int helper(vector<int>& nums, int pages) {
        int n = nums.size();
        int partition = 1;   // start with 1 
        int subarraysum = 0;  // pages assigned to the current student

        for (int i = 0; i < n; i++) {
            // If current book fits in the current student's limit
            if (subarraysum + nums[i] <= pages) {
                subarraysum += nums[i]; // assign this book to current student
            } else {
                // Otherwise, we need a new student
                partition++;
                subarraysum = nums[i]; // start this new student's allocation
            }
        }
        return partition; // return number of students needed
    }
    int largestSubarraySumMinimized(vector<int> &a, int k) {
                int n = a.size();

        // If there are more k than books, not possible
        if (k > n) return -1;

        // Minimum possible limit = element
        int low = *max_element(a.begin(), a.end());

        // Maximum possible limit = sum of all elements
        int high = accumulate(a.begin(), a.end(), 0);

        // We want the minimum feasible "maximum element per k"
        while (low <= high) {
            int mid = low + (high - low) / 2;  // max sum of subarray

            // If we can allocate with 'mid' pages or less per student
            if (helper(a, mid) <= k) {
                // It's feasible, try to minimize further
                high = mid - 1;
            } else {
                // Not feasible, need to increase 
                low = mid + 1;
            }
        }

        // At the end, 'low' points to the smallest feasible answer
        return low;
    }
};
