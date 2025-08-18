Time Complexity:O(n^3) due to three nested loops (two explicit, one implicit from the two-pointer approach).

Space Complexity:O(1) excluding the output vector, as the algorithm uses a constant amount of extra space.

approach: fix 2 variables and then try 2-sum and 3-sum approach by taking to variable pointers one at beginnning at one at last.

```cpp
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int k=j+1;
                int m=n-1;
                
                while(k<m){
                    int sum=nums[i]+nums[k]+nums[j]+nums[m];
                    if(sum>target){
                        m--;
                    }else if(sum<target){
                        k++;
                    }else{
                        vector<int> temp={nums[i],nums[j],nums[k],nums[m]};
                        ans.push_back(temp);
                        k++;m--;
                        while(k<m && nums[k]==nums[k-1]) k++;
                        while(k<m && nums[m]==nums[m+1]) m--;

                    }
                }
            }
        }
        return ans;
    }
};





