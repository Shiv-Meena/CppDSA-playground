Time Complexity:O(n log n) for sorting + O(n^2) for the two-pointer approach, resulting in O(n^2)

Space Complexity:O(1) excluding the output array; O(n) including the output array in the worst case

<img width="986" height="746" alt="image" src="https://github.com/user-attachments/assets/f3473f3f-9e3c-4bb0-bc40-1d2b7b6ea447" />

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            // int m=-nums[i];
            while(j<k){
                if(nums[j]+nums[k]+nums[i]==0){
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }else if(nums[j]+nums[k]+nums[i]>0){
                    k--;
                }else{
                    j++;
                }
            }
            
        }
        // ans.push_back(temp);
        return ans;
    }
};
