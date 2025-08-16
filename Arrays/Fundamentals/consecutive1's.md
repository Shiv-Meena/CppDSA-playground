Time Complexity:The time complexity is O(n) because the code iterates through the input vector 'nums' once.

Space Complexity:The space complexity is O(1) because the code uses a constant amount of extra space regardless of the input size.
To find the number of maximum consecutive 1s, the idea is to count the number of 1s each time we encounter them and update the maximum number of 1s. On encountering any 0, reset the count to 0 again so as to count the next consecutive 1s.
```cpp
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                maxi=max(cnt,maxi);
            }else{
                cnt=0;
            }
        }
        return maxi;
    }
};
