Time Complexity:O(n) due to the recursive calls that iterate through each element of the input vector once.
Space Complexity:O(n) due to the recursive call stack, where n is the size of the input vector.

aSum(nums, 0)
|
|-- nums[0] = 1
|-- returns 1 + aSum(nums, 1)
             |
             |-- nums[1] = 2
             |-- returns 2 + aSum(nums, 2)
                          |
                          |-- nums[2] = 3
                          |-- returns 3 + aSum(nums, 3)
                                       |
                                       |-- aSum(nums, 3) -> index >= size -> returns 0


```cpp
class Solution{	
	public:
        int aSum(vector<int>& nums ,int left){
            // int n=nums.size();
            if(left>=nums.size()) return 0;
            return nums[left]+aSum(nums,left+1);
            // return sum;

        }
		int arraySum(vector<int>& nums){
			//your code goes here
            int n=nums.size();
            int sum=0;
            return aSum(nums,0);
		}
};
