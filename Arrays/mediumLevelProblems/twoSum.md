Time Complexity:The time complexity is dominated by the sorting step, which is O(n log n), and the initial loop which takes O(n). Thus the overall time complexity is O(n log n).

Space Complexity:The space complexity is O(n) because we create a vector of pairs `index` of size n.
The problem requires you to return the *original* indices of the two numbers that sum up to the target, *not* the indices after sorting.

Here's how to fix it:

Store Original Indices: Create a vector of pairs (number, original index) before sorting.

Sort Based on Numbers: Sort this vector of pairs based on the number.

Two-Pointer Approach: Apply the two-pointer approach on the sorted vector.(sum>target -> j-- ,else i++)

Return Original Indices: Retrieve the original indices from the pairs and return them.

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> index;
        for(int i=0;i<n;i++){
            index.push_back({nums[i],i});
        }
        sort(index.begin(),index.end());
        int i=0;
        int j=n-1;
        vector<int> temp;
         int sum;
        while(i<j){
           
            sum=index[i].first+index[j].first;
            if(sum==target){
                return {index[i].second,index[j].second};
            }else if(sum>target){
                j--;
            }else{
                i++;
            }
        }
        return {-1,-1};
    }
};
