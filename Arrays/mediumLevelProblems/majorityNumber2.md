**OPTIMAL APPROACH - MOORE VOTING ALGO**
Time Complexity:O(n) due to two linear loops over the input array.

Space Complexity:O(1) as the extra space used is constant, regardless of the input size.

```cpp
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0;
        int cnt2=0;
        int el1=INT_MIN;int el2=INT_MIN;
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(cnt1==0 && el2!=nums[i]){
                cnt1++;
                el1=nums[i];
            }else if(cnt2==0 && el1!=nums[i]){
                cnt2++;
                el2=nums[i];
            }else if(el1==nums[i] && el2!=nums[i]){
                cnt1++;
            }else if(el2==nums[i]&& el1!=nums[i]){
                cnt2++;
            }else{
                cnt1--;cnt2--;
            }
        }
        int cnt11=0;int cnt22=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el1) cnt11++;
            if(nums[i]==el2) cnt22++;
        }
        if(cnt11 > n/3  ) temp.push_back(el1);
        if(cnt22 > n/3 && el1!=el2) temp.push_back(el2);
        return temp;
    }
};
```
**BETTER APPROACH-HASHING**
Time Complexity:O(n) due to iterating through the input vector `nums` once to populate the hash map and then iterating through the hash map, which has a maximum size of n.

Space Complexity:O(n) in the worst case due to the hash map potentially storing all unique elements of the input vector `nums`.

```CPP
class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {
        unordered_map<int , int> freq;
        int n=nums.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second> n/3) {
                temp.push_back(it.first);
            }
        }
        return temp;
    }
};
