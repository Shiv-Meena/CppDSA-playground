Time Complexity:O(n) due to the single for loop iterating through the input vector.

Space Complexity:O(n) in the worst case, due to the map potentially storing all prefix sums.
![WhatsApp Image 2025-09-12 at 15 30 59_c2ed9135](https://github.com/user-attachments/assets/fe5b15bc-4668-47bf-a01e-e23365c7b3b3)

```cpp
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
       int n=nums.size();
       map<int,int> mpp;
       int sum=0;
       int maxlen=0;
       for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==k) maxlen=max(maxlen,i+1);
            int rem=sum-k;
            if(mpp.find(rem)!=mpp.end()){
                int len=i-mpp[rem];
                maxlen=max(maxlen,len);
            }
            if(mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
       }
       return maxlen;
    }
};
