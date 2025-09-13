Time Complexity:O(log n) due to the binary search algorithm.

Space Complexity:O(1) as it uses constant extra space.

![WhatsApp Image 2025-09-13 at 15 17 04_389d7ba5](https://github.com/user-attachments/assets/60cc2bf6-b099-4b08-9216-c4f8daf970d0)

```cpp
class Solution {
public:
    int search(vector<int> &nums, int k) {
       int n=nums.size();
       int low=0;
       int high=n-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==k) return mid;
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
        if(nums[mid]<=nums[high]){
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
       return -1;
    }
};
