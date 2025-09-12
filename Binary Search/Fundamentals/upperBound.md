Time Complexity:O(log n) due to binary search

Space Complexity:O(1) as it uses constant extra space

The upper bound algorithm finds the first and smallest index in a sorted array where the value at that index is greater than a given key i.e. x.
```cpp
class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>x){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
