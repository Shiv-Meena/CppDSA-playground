Time Complexity:O(log n) due to the binary search algorithm.

Space Complexity:O(1) as it uses a constant amount of extra space.

![WhatsApp Image 2025-09-14 at 12 49 25_855bdfc6](https://github.com/user-attachments/assets/f18c8e60-8a48-4104-b6aa-ab1024b43f44)
![WhatsApp Image 2025-09-14 at 12 49 26_57571337](https://github.com/user-attachments/assets/6a04212b-d9dc-49c1-aca7-83b6e424b88f)


```cpp
class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n=nums.size();
        int low=1;
        int high=n-2;
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid-1]&& nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            // (E,O) Eliminating left half. cases: (E,O*) (E*,O)
            if((mid%2==1 && nums[mid]==nums[mid-1])||(mid%2==0 && nums[mid]==nums[mid+1])){
                low=mid+1;
            }
            // (O,E) Eliminating right half. Cases (O*,E) (O,E*)
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};
