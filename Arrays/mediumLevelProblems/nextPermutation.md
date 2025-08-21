Time Complexity:O(n) due to iterating through the array multiple times, including reverse operations.

Space Complexity:O(1) as it uses a constant amount of extra space.
![WhatsApp Image 2025-08-21 at 12 08 56_9b64ed17](https://github.com/user-attachments/assets/b0b4e77e-23b3-4dbc-b666-9126e143b4f2)
![WhatsApp Image 2025-08-21 at 12 09 07_b7b9dd93](https://github.com/user-attachments/assets/e5b0e3c1-6c9b-46a8-b51a-2cb6810146e6)
![WhatsApp Image 2025-08-21 at 12 09 07_b7b9dd93](https://github.com/user-attachments/assets/e0cf8ca0-efc6-4be7-a5e7-e0398dee5990)


```cpp
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // Your code goes here
        int n=nums.size();
        int ind=-1;
        // break pointe
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        // finding closest greater number than nums[ind];
        for(int i=n-1;i>=ind;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
        // return nums;
    }
};
