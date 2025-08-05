Time Complexity:O(n) due to the recursive calls that iterate through each element of the input vector once.
Space Complexity:O(n) due to the recursive call stack, where n is the size of the input vector.

<img width="965" height="450" alt="image" src="https://github.com/user-attachments/assets/b339173c-71c8-4f5a-b3a1-11ec413edd05" />



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
