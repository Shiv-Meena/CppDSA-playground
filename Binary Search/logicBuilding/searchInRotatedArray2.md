Time Complexity:The worst-case time complexity is O(n) due to the potential for linear search caused by duplicates, while the best-case time complexity (without duplicates) is O(log n).

Space Complexity:The space complexity is O(1) as it uses a constant amount of extra space.

![WhatsApp Image 2025-09-13 at 15 36 19_64084b48](https://github.com/user-attachments/assets/b721a458-acb4-4016-ae86-c2bdb8ad39e5)

```cpp
class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
       int n=nums.size();
       int low=0;
       int high=n-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==k) return true;
        // handling duplicates
        if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low=low+1;
            high=high-1;
            continue;
        }
        // left part is sorted
        if(nums[mid]>=nums[low]){
            // target exist in left sorted array
            if(nums[low]<= k && k<=nums[mid]){
                high=mid-1;
            }
            // target doesnt exist in left sorted array
            else{
                low=mid+1;
            }
        }
        // right part is sorted
        else{
            // target exists in right sorted part
            if(nums[mid]<=k && k<=nums[high]){
                low=mid+1;
            }
            // target doesnt exist in right sorted part
            else{
                high=mid-1;
            }
        }
       }
       return false;
    }
};
