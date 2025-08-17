**OPTIMAL APPROACH**

Time Complexity:**O(n)** due to a single for loop iterating through the input array and reverse function which takes O(n) time.

Space Complexity:**O(n)** because the temp vector can grow up to the size of the input array in the worst case. it will be **O(1)** if the extra space to store the answer is not considered.


![WhatsApp Image 2025-08-17 at 17 16 07_37efc2c0](https://github.com/user-attachments/assets/0d94da93-74a5-4332-bf0a-eda8c51b4db2)
![WhatsApp Image 2025-08-17 at 17 16 19_987ca6d2](https://github.com/user-attachments/assets/44e34a25-fc83-4db3-9de3-e34cba1c1141)
![WhatsApp Image 2025-08-17 at 17 16 07_04064c9e](https://github.com/user-attachments/assets/a0d5a6bb-43d5-4e98-830b-04a7197b68bb)

```CPP
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int n=nums.size();
      vector<int> temp;
      int currentLeader=nums[n-1];
      temp.push_back(nums[n-1]);
      for(int i=n-2;i>=0;i--){
        if(nums[i]>currentLeader){
            temp.push_back(nums[i]);
            currentLeader=nums[i];
        }
      }
      reverse(temp.begin(),temp.end());
      return temp;
    }
};
```
**BRUTE FORCE**

Time Complexity:The time complexity is O(n^2) due to the nested loops.

Space Complexity:The space complexity is O(n) because the temp vector can store up to n elements in the worst case.

```CPP
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int n=nums.size();
      vector<int> temp;
      for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]&& j==n-1){
                temp.push_back(nums[i]);
            }else if(nums[i]>nums[j] ){
                continue;
            }else{
                break;
            }
            
        }
        // temp.push_back(nums[i]);
      }
      temp.push_back(nums[n-1]);
      return temp;
    }
};
