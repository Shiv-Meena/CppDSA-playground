Time Complexity:The time complexity is O(n), where n is the size of the input vector nums.

Space Complexity:The space complexity is O(1), as it uses a constant amount of extra space.


```cpp
class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        //your code goes here

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) return i;

        }
        return -1;
    }
};
