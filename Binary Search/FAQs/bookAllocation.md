Time Complexity:O(n log(sum of array)), where n is the size of the input array

Space Complexity:O(1), excluding the input array.

![WhatsApp Image 2025-09-19 at 19 01 16_ca7ceae6](https://github.com/user-attachments/assets/c3a8caf3-16ab-4942-9661-728b593663b8)
![WhatsApp Image 2025-09-19 at 19 01 16_3a19334c](https://github.com/user-attachments/assets/6d2b2c58-3114-4700-8568-e6eced86bfdc)


```cpp
class Solution {
public:
    // Helper function: given a maximum page limit 'pages',
    // check how many students are required to allocate all books
    int helper(vector<int>& nums, int pages) {
        int n = nums.size();
        int stucnt = 1;   // start with 1 student
        int pagecnt = 0;  // pages assigned to the current student

        for (int i = 0; i < n; i++) {
            // If current book fits in the current student's limit
            if (pagecnt + nums[i] <= pages) {
                pagecnt += nums[i]; // assign this book to current student
            } else {
                // Otherwise, we need a new student
                stucnt++;
                pagecnt = nums[i]; // start this new student's allocation
            }
        }
        return stucnt; // return number of students needed
    }

    // Main function to find minimum number of pages
    int findPages(vector<int> &nums, int m)  {
        int n = nums.size();

        // If there are more students than books, not possible
        if (m > n) return -1;

        // Minimum possible limit = largest single book
        int low = *max_element(nums.begin(), nums.end());

        // Maximum possible limit = sum of all pages
        int high = accumulate(nums.begin(), nums.end(), 0);

        // We want the minimum feasible "maximum pages per student"
        while (low <= high) {
            int mid = low + (high - low) / 2;  // candidate max pages

            // If we can allocate with 'mid' pages or less per student
            if (helper(nums, mid) <= m) {
                // It's feasible, try to minimize further
                high = mid - 1;
            } else {
                // Not feasible, need to increase pages limit
                low = mid + 1;
            }
        }

        // At the end, 'low' points to the smallest feasible answer
        return low;
    }
};
