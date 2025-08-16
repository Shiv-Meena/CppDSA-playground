Time Complexity:The time complexity is O(n + k), where n is the size of the input array and k is the rotation factor. This is because the code iterates up to 'k' times in the first loop to copy elements into the 'temp' vector, then up to 'n-k' times in the second loop, and finally 'k' times in the third loop. Hence, the total time complexity is O(k) + O(n-k) + O(k) = O(n+k)

Space Complexity:The space complexity is O(k) because an auxiliary vector 'temp' of size k is used.
<img width="1035" height="456" alt="image" src="https://github.com/user-attachments/assets/e38e8b85-dd37-495f-b60a-0b59e062da20" />
<img width="1062" height="491" alt="image" src="https://github.com/user-attachments/assets/fc7eeb62-e7df-410b-9d0d-e4947233e7f7" />
<img width="1060" height="500" alt="image" src="https://github.com/user-attachments/assets/902b5c55-79fc-4557-81e2-cb163e338030" />

```cpp
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
         int n=nums.size();
         k=k%n;
         vector<int> temp;
         for(int i=0;i<k;i++){
            temp.push_back(nums[i]);
         }
         for(int i=0;i<n-k;i++){
            nums[i]=nums[k+i];
         }
         for(int i=0;i<temp.size();i++){
            nums[n-k+i]=temp[i];
         }
    }
};
