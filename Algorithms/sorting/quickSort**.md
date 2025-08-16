Time Complexity:The average and best-case time complexity is O(n log n), while the worst-case time complexity is O(n^2) due to the possibility of unbalanced partitions.

Space Complexity:The space complexity is O(log n) on average due to the recursive calls, and O(n) in the worst case.

![WhatsApp Image 2025-08-16 at 13 14 01_fb0b24a3](https://github.com/user-attachments/assets/cd6482b5-61ec-42bc-9af0-b4b9b5bf77e2)
![WhatsApp Image 2025-08-16 at 13 14 01_1f4809d7](https://github.com/user-attachments/assets/6ddc6e26-c956-469b-bd76-a1b1d687d744)
![WhatsApp Image 2025-08-16 at 13 14 01_dc1162e7](https://github.com/user-attachments/assets/f0ea9d42-33cc-4830-a3c4-0fe6bc21fc12)
![WhatsApp Image 2025-08-16 at 13 14 01_28e342f0](https://github.com/user-attachments/assets/57ce7d6b-6ff7-42ec-b82b-427a25dd2b35)

```cpp
class Solution {
    private:
    int partition(vector<int>& nums, int low, int high){
        int i=low;
        int j=high;
        int pivot=nums[low];
        while(i<j){
            while(nums[i]<=pivot && i<high){
                i++;
            }
            while(nums[j]>pivot && j>low){
                j--;
            }
            if(i<j) swap(nums[i],nums[j]);
        }
        swap(nums[j],nums[low]);
        return j;
    }
   void qs(vector<int>& nums, int low, int high){
         if(low<high){
            int p=partition(nums,low,high);
            qs(nums,low,p-1);
            qs(nums,p+1,high);
        }
       
    }
public:
    vector<int> quickSort(vector<int>& nums) {
        int n=nums.size();
        
        qs(nums,0,n-1);
        return nums;
    }
};
