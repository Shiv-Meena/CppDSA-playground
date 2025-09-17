Time Complexity:O(n*log(max(nums))), where n is the number of elements in nums.

Space Complexity:O(1)

![WhatsApp Image 2025-09-17 at 08 38 17_f0efbb75](https://github.com/user-attachments/assets/8bf226ae-6fbb-46af-a30b-7d824b496dce)
![WhatsApp Image 2025-09-17 at 08 38 17_8acab899](https://github.com/user-attachments/assets/da334c36-697b-4dfa-8a6d-ba10ed1af1e8)

```cpp
class Solution {
public:
    int helper(vector<int> &nums,int d){
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=ceil((double)(nums[i])/(double)(d));
        }
        return sum;
    }
  int smallestDivisor(vector<int> &nums, int limit) {
       int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(helper(nums,mid)<=limit){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
