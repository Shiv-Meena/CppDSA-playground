Time Complexity:The time complexity is **O(n^2)** because of the nested loops, where the outer loop runs 'n-1' times and the inner loop's iterations depend on 'i', but in the worst case, it approximates to O(n^2).

Space Complexity:The space complexity is** O(1)** as the algorithm sorts the array in-place, using only a constant amount of extra space for variables like 'i', 'j', and 'minindex'.

![WhatsApp Image 2025-08-14 at 06 36 16_3c6dc7a1](https://github.com/user-attachments/assets/e7ba580f-5e6e-4e68-b553-ff6ca62dfec3)
![WhatsApp Image 2025-08-14 at 06 36 16_274819ed](https://github.com/user-attachments/assets/de28b67a-ba51-4974-b1d5-ac443ae3b694)
![WhatsApp Image 2025-08-14 at 06 36 16_996ee4b1](https://github.com/user-attachments/assets/070d3b05-8d6a-479c-bd52-b82e5d9ac42a)



```cpp
class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int minindex=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[minindex]){
                    minindex=j;
                }
            }
            swap(nums[minindex],nums[i]);
        }
        return nums;
    }
};
