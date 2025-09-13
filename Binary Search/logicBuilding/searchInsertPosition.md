Time Complexity:O(log n) due to binary search algorithm.

Space Complexity:O(1) because it uses a constant amount of extra space.

In this specific problem, if the target itself is found, return its index. Otherwise, return the smallest index where the element is greater than the target. Upon observation, it becomes clear that the lower bound of the target serves this purpose. Therefore, for this problem, simply find the **lower bound of the target. If no such element is found, return the size of the array.
**
```cpp
class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
       int n=nums.size();
       int low=0;
       int high=n-1;
       int ans=n;
       if(target>nums[n-1]) return n;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>=target){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
       }
       return ans;
    }
};
