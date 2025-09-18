Time Complexity:O(n log(max(nums) - min(nums)) + n) because the binary search iterates log(max(nums) - min(nums)) times, and the helper function takes O(n) time, plus O(n) for finding the min and max elements.

Space Complexity:O(1) since the algorithm uses a constant amount of extra space.

![WhatsApp Image 2025-09-18 at 09 15 49_539478f7](https://github.com/user-attachments/assets/ab9fcd69-12a0-46b3-b0a2-2b1d0c476e20)
![WhatsApp Image 2025-09-18 at 09 15 49_a9d73bc0](https://github.com/user-attachments/assets/5d2a9604-ee2e-4281-aa92-891d16dec65c)

```cpp
class Solution {
public:
bool helper(vector<int> & nums, int mid ,int k ,int m){
    int n=nums.size();
    int cnt=0;
    int noobq=0;
    for(int i=0;i<n;i++){
        if(nums[i]<=mid){
            cnt++;
        }else{
            noobq+=cnt/k;
            cnt=0;
        }
    }
    noobq+=cnt/k;
    return noobq>=m;
}
int roseGarden(int n,vector<int> nums, int k, int m) {
    if(m*k>n) return -1;
   int low=*min_element(nums.begin(),nums.end());
   int high=*max_element(nums.begin(),nums.end());
   int ans=-1;
   while(low<=high){
    int mid=low+(high-low)/2;
    if(helper(nums,mid,k,m)){
        ans=mid;
        high=mid-1;
    }else{
        low=mid+1;
    }
   }
   return ans;
  }
};
