Time Complexity:O(n) because the code iterates through the input array 'nums' once.

Space Complexity:O(n) in the worst case, as the 'mpp' map can store up to 'n' distinct prefix sums.
![WhatsApp Image 2025-09-12 at 22 21 43_35fac1ba](https://github.com/user-attachments/assets/a56fd5bb-edb0-432a-8c23-e2b17cc0b496)
![WhatsApp Image 2025-09-12 at 22 22 08_69fdfda2](https://github.com/user-attachments/assets/34b8e6c7-07ed-4637-a92c-c9842e151257)


```cpp
class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        map<int,int> mpp;
        int n=nums.size();
        int cnt=0;
        int sum=0;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            cnt+=mpp[sum-k];
            mpp[sum]++;
        }
        return cnt;
    }
};
