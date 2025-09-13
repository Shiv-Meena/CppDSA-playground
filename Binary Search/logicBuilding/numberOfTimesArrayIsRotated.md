Time Complexity:The time complexity is O(log n) because the code uses binary search.

Space Complexity:The space complexity is O(1) because it uses a constant amount of extra space.


```cpp
class Solution {
public:
    int findKRotation(vector<int> &nums)  {
          int n=nums.size();
      int low=0;
      int high=n-1;
      int ans=INT_MAX;
      int mid=low+(high-low)/2;
      int index=-1;
      while(low<=high){
        mid=low+(high-low)/2;
        if(nums[low]<=nums[high]){
            // nums[low] < ans ensures we always track the smallest element found so far and its index, which directly gives us the rotation count.
            
            if(nums[low]<ans){
            index=low;
            ans=nums[low];
            }
            break;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<ans){
                ans=nums[low];
                index=low;
            }
            low=mid+1;
        }else{
            if(nums[mid]<ans){
            ans=nums[mid];
            index=mid;
            }
            high=mid-1;
        }
      }
      return index;
    }
};
