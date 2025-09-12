Time Complexity:O(log n) due to the binary search algorithm.

Space Complexity:O(1) as it uses constant extra space.

```cpp
class Solution{
public:
    int search(vector<int> &nums, int target){
     long long low=0;
     int n=nums.size();
     long long high=n-1;
     
     while(low<=high){
        long long mid=low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
     }
     return -1;
    }
};
