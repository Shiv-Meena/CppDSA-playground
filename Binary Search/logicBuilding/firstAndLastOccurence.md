Time Complexity:The time complexity is O(log n) because binary search is performed twice.

Space Complexity:The space complexity is O(1) as only a constant amount of extra space is used.

![WhatsApp Image 2025-09-13 at 12 57 58_acbb7c20](https://github.com/user-attachments/assets/1f40e657-24e5-4765-b3ef-bff88dad1bc6)


```cpp
class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans1=-1;
        int ans2=-1;
        vector<int> ans;
        // 1st occurence
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans1=mid;
                high=mid-1;
            }else if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        ans.push_back(ans1);
        // last occurence
        low=0;high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans2=mid;
                low=mid+1;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        ans.push_back(ans2);
        return ans;
    }
};
