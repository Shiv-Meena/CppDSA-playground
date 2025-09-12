Time Complexity:O(log n) due to the binary search algorithm.

Space Complexity:O(1) as it uses a constant amount of extra space.
![WhatsApp Image 2025-09-13 at 00 58 05_cba9ecba](https://github.com/user-attachments/assets/fb7c6ada-ac64-470e-8ec7-e66c739da94f)

```cpp
class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int low=0;
        int n=nums.size();
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            // if(nums[mid]==x) return mid; if arr is like {1 2 2 2 3} then this code will return index 2 as ans but actual ans is index 1 , that is why we cannot directly return mid if arr[mid] == x
            if(nums[mid]>=x){
                high=mid-1;
                ans=mid;
            }else{
                low=low+1;
            }
        }
        return ans;
    }
};
