Time Complexity:The time complexity is **O(n^2)** due to the nested loops, where n is the size of the input vector.

Space Complexity:The space complexity is **O(1)** as the algorithm sorts in place and uses a constant amount of extra space.

Explanation: In each round the greatest element get sorted at its position.

![WhatsApp Image 2025-08-14 at 06 49 21_07662e9b](https://github.com/user-attachments/assets/5827df4c-3059-404b-9952-26ad955f625e)
![WhatsApp Image 2025-08-14 at 06 49 21_60a2fa29](https://github.com/user-attachments/assets/acf54704-c54a-4d00-8a90-d39af4da61bb)
![WhatsApp Image 2025-08-14 at 06 49 21_c54b98fe](https://github.com/user-attachments/assets/341d7b8e-052f-46f3-9633-9a450490d23b)
![WhatsApp Image 2025-08-14 at 06 49 21_88c85034](https://github.com/user-attachments/assets/472a93b9-a70f-4eef-b698-c2b8a79159e4)
![WhatsApp Image 2025-08-14 at 06 49 21_29bd083c](https://github.com/user-attachments/assets/72abc1d1-5a8f-437c-a8ee-6cecb025c640)


```cpp
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        return nums;
    }
};
