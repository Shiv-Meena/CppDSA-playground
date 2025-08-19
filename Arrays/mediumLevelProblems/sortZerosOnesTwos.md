**BETTER APPROACH**

Time Complexity:O(n) because the code iterates through the input vector `nums` once to count the occurrences of each number (0, 1, and 2), and then iterates a maximum of `n` times in the while loop to rewrite the `nums` array. Thus, the time complexity is directly proportional to the size of the input, making it O(n).

Space Complexity:O(1) because the code uses an unordered map `cnt` to store the counts of 0, 1, and 2. Since we know that there are only three possible values (0, 1, and 2), the size of the map is constant, irrespective of the size of the input array. Thus, the space used does not scale with the input size, and is therefore O(1).

![WhatsApp Image 2025-08-19 at 11 50 46_2dec1d34](https://github.com/user-attachments/assets/5dfe0737-13f1-4f2b-bed6-f0210c5d46ea)

```cpp
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        unordered_map<int,int> cnt;
        int n=nums.size();
        for(int i=0;i<n;i++){
            cnt[nums[i]]++;
        }
        int index=0;
        for(int i=0;i<=2;i++){
            while(cnt[i]>0){
                nums[index++]=i;
                cnt[i]--;
            }
        }
    }
};
```
**OPTIMAL - DUTCH NATIONAL FLAG ALGO**

Time Complexity:O(n), where n is the size of the input vector nums, as the while loop iterates at most n times.

Space Complexity:O(1), as the algorithm uses a constant amount of extra space for variables like low, mid, and high, regardless of the input size.

![WhatsApp Image 2025-08-19 at 11 50 46_213320e8](https://github.com/user-attachments/assets/b52ef533-8113-4a37-9103-8df4cb47e2b9)

```cpp
class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
      int low=0;
        int n=nums.size();
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
