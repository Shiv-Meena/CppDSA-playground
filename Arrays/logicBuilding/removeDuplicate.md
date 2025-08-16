Time Complexity:O(n), where n is the size of the input vector, due to the single for loop iterating through the vector.

Space Complexity:O(1), as the algorithm uses a constant amount of extra space, regardless of the input size. The operations are performed in place.

<img width="963" height="473" alt="image" src="https://github.com/user-attachments/assets/9b590ab2-ce96-4ef6-923a-f231a0695b69" />

```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int j=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};
