Time Complexity:O(n) due to the recursive reverse function which iterates through half of the array elements.
Space Complexity:O(n) due to the recursive calls creating a call stack proportional to half the size of the array.

```cpp
class Solution{	
	public:
        void reverse(vector<int>& nums, int j , int i){
            if(i>=j) return;
            swap(nums[i],nums[j]);
             reverse(nums,j-1,i+1);
        }
		vector<int> reverseArray(vector<int>& nums){			
			//your code goes here
            int n=nums.size();
            
            reverse(nums,n-1,0);
            return nums;
		}
};
