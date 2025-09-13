Time Complexity:O(log n) due to the binary search algorithm.

Space Complexity:O(1) excluding the output vector, otherwise O(1).

Given a sorted array nums and an integer x. Find the floor and ceil of x in nums. The floor of x is the largest element in the array which is smaller than or equal to x. The ceiling of x is the smallest element in the array greater than or equal to x. If no floor or ceil exists, output -1.

![WhatsApp Image 2025-09-13 at 12 29 09_4c773086](https://github.com/user-attachments/assets/a4815174-71fc-47af-9463-1365823a255d)

```cpp
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans1=-1;int ans2=-1;
        vector<int> ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==x){
                ans1=nums[mid];
                ans2=nums[mid];
                break;
            }else if(nums[mid]>x){
                ans2=nums[mid];
                high=mid-1;
            }else{
                ans1=nums[mid];
                low=mid+1;
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
