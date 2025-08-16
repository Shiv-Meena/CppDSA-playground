Time Complexity:O(n) due to the accumulate function and the for loop.

Space Complexity:O(1) as it uses a constant amount of extra space.

```cpp
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int sumT=0;
        for(int i=1;i<=n;i++){
            sumT+=i;
        }
        return sumT-sum;
    }
};
