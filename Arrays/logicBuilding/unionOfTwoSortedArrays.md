Time Complexity:O(n + m) because the code iterates through both input arrays `nums1` of size `n` and `nums2` of size `m` at most once.

Space Complexity:O(n + m) because in the worst case, the `nums3` vector might contain all unique elements from both input arrays, resulting in a space proportional to the sum of their lengths.

```cpp
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
       vector<int> nums3;
       int n=nums1.size();
       int m=nums2.size();
       int maxi=max(n,m);
       int i=0;
       int j=0;
       while(i<n && j<m){
        if(nums1[i]==nums2[j]){
            if(nums3.empty() || nums3.back()!=nums2[j]){
            nums3.push_back(nums2[j]);
            }
            i++;j++;
        }
        else if(nums1[i]>nums2[j]){
            if(nums3.empty() || nums3.back()!=nums2[j]){
            nums3.push_back(nums2[j]);
            }
            j++;
        }else{
            if(nums3.empty() || nums3.back()!=nums1[i]){
            nums3.push_back(nums1[i]);
            }
            i++;
        }
       } 
       while(i<n){
        if(nums3.empty() || nums3.back()!=nums1[i]){
        nums3.push_back(nums1[i]);
        }
            i++;
       }
       while(j<m){
        if(nums3.empty() || nums3.back()!=nums2[j]){
        nums3.push_back(nums2[j]);
        }
            j++;
       }
       return nums3;
    }
};
```
<img width="988" height="375" alt="image" src="https://github.com/user-attachments/assets/f2b5ad4b-9a2d-46fa-9862-92938dacf06d" />
