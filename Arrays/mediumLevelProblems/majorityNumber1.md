**OPTIMAL APPROACH**
**MOORES VOTING ALGORITHM**

Time Complexity:O(n) because the code iterates through the input array `nums` twice, each time taking O(n) time, thus the overall time complexity is O(2n) which simplifies to O(n).

Space Complexity:O(1) as the code uses a constant amount of extra space, regardless of the input size. Variables like `n`, `el`, `cnt`, and `cnt1` take up constant space.
![WhatsApp Image 2025-08-16 at 21 58 38_844c9825](https://github.com/user-attachments/assets/93c5b556-f46f-4054-a471-04f55c8fd7d9)

```CPP
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int el;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }else if(el==nums[i]){
                cnt++;
            }else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el) cnt1++;
        }
        if(cnt1>n/2) return el;
        return -1;
    }
};
```
**BETTER APPROACH - HASHING**
Time Complexity:O(n) due to iterating through the input array once to build the frequency map and then iterating through the map which has at most n elements, resulting in O(n+n) which simplifies to O(n).

Space Complexity:O(n) because the unordered map `freq` can store at most n key-value pairs, where n is the number of elements in the input array `nums`.

```CPP
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second>n/2) return it.first;
        }
        return -1;
    }
};
