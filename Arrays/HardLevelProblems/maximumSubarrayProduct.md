Time Complexity:The time complexity is O(n) due to a single loop iterating through the input vector.

Space Complexity:The space complexity is O(1) as it uses a constant amount of extra space regardless of the input size.
![WhatsApp Image 2025-09-09 at 14 56 30_38e0da20](https://github.com/user-attachments/assets/85ad1ab6-bdf8-4144-b003-12c522e54aa2)
![WhatsApp Image 2025-09-09 at 14 56 30_57736099](https://github.com/user-attachments/assets/4a20db44-c292-4105-b6f6-3953b25db739)

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int prefix=1;
        int suffix=1;
        for(int i=0;i<n;i++){
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;
            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            maxi=max(maxi,max(prefix,suffix));
        }
        return maxi;
    }
};
