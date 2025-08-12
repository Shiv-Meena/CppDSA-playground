Time Complexity:O(n) due to the recursive calls checking each element.
Space Complexity:O(n) due to the recursion depth on the call stack.


```cpp
class Solution{	
    private:
        bool sorti(vector<int> & nums,int i,int n){
            if(i>=n) return true;
            if(nums[i]>nums[i+1]) return false;
            return sorti(nums,i+1,n);
        }
	public:
		bool isSorted(vector<int>& nums){
			//your code goes here
            int n=nums.size();
            return sorti(nums,0,n-1);
		}
};
