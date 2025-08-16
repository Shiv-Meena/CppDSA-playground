Time Complexity:O(n) because the code iterates through the input vector once.

Space Complexity:O(1) because the code uses a fixed amount of extra space, regardless of the input size.

Single Traversal: Iterate through the array, updating largest and second_largest in a single pass. If a new largest element is found, update second_largest to the previous largest and largest to the new largest element. If the current element is greater than second_largest but not equal to largest, update second_largest.
```cpp
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        if(nums.size()<2) return -1;
        int maxi=INT_MIN;
        int secondMax=INT_MIN;;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                secondMax=maxi;
                maxi=nums[i];
                
            }else if(secondMax<nums[i] && maxi!=nums[i]){
                secondMax=nums[i];
            }
        }
        
        if(maxi==secondMax || secondMax==INT_MIN) return -1;

      return secondMax;
    }
};
