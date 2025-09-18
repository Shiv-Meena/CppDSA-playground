Small note: since numbers are huge, the sum in helper can grow big (but within range of int? No — it can exceed).
For safety, change sum to long long

<img width="512" height="238" alt="image" src="https://github.com/user-attachments/assets/a2f2c92f-530a-4e9b-bd30-de8119db5c4c" />
Time Complexity:O(n log m) where n is the size of nums and m is the maximum element in nums.

Space Complexity:O(1) excluding the input array.

```cpp
class Solution {
public:
long long helper(vector<int> &nums, int mid){
    long long sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum+=ceil((double)nums[i]/mid);
    }
    return sum;
}
int minimumRateToEatBananas(vector<int> nums, int h) {
    long long low=1;
    long long high=*max_element(nums.begin(),nums.end());
    int ans;
    while(low<=high){
        long long mid=low+(high-low)/2;
        // if(helper(nums,mid)==h) return mid;
        if(helper(nums,mid)<=h){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
    }
};
