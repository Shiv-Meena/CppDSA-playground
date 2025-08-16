Time Complexity:O(n) due to the single for loop iterating up to n-1, where n is the size of the input vector.

Space Complexity:O(1) because the algorithm uses a constant amount of extra space, regardless of the input size; only a single integer variable 'temp' is used.


```cpp
class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        int temp=nums[0];
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            nums[i]=nums[i+1];
        }
        nums[n-1]=temp;
    }
};
