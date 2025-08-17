**BRUTE FORCE**
Time Complexity:O(n) due to iterating through the input array 'nums' once, and then iterating half the size of input array to create the final array

Space Complexity:O(n) due to creating 'pos', 'neg', and 'ans' vectors, which in total can take up n space.

```CPP
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        int n=nums.size();
        vector<int> neg;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        for(int i=0;i<n/2;i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};
```
**OPTIMAL APPROACH**
Time Complexity: O(N), for traversing the array only once where N is the length of the array.

Space Complexity: O(N) to store the resultant array.

Initialize two variable posIndex as 0 and negIndex as 1 initially.
Now, iterate in the array & on encountering the first negative element, understand that its first position in resultant array should be starting from index 1, as initially positive number will be placed. And then each time when a negative number is found, its next position would be 2 steps ahead considering that a positive number will occupy space in between 2 negative numbers. So increment the position of negative number by 2.
Similarly, when you encounter the first positive element, it occupies the position at index 0 in the resultant array, and then each time on finding a positive number, put it on the posIndex and it increments by 2.
When both the negIndex and posIndex exceed the size of the array, stop the iteration as the whole array is now rearranged alternatively according to the sign.

```CPP
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int posindex=0;
        int negindex=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0 ){
                ans[posindex]=nums[i];
                posindex+=2;
            }
            else{
                ans[negindex]=nums[i];
                negindex+=2;
            }
        }
        return ans;
    }
};
