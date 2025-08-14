Time Complexity:O(n log n) due to the recursive merge sort algorithm dividing the array and merging sorted subarrays.

Space Complexity:O(n) due to the temporary array used in the merge function.

mid=low+(high-low)/2 -> This is done in order to prevent integer overflow.

<img width="932" height="417" alt="image" src="https://github.com/user-attachments/assets/b18f186e-1edc-4b5d-9cfe-bb3927814420" />

```cpp
class Solution {
private:
    void merge(vector<int>& nums,int low,int mid,int high){
        int left=low;
        int right=mid+1;
        vector<int> temp;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
         while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }
    void mergerSort(vector<int>& nums,int low,int high){
        if(low>=high) return ;
        int mid=low+(high-low)/2;
        mergerSort(nums,low,mid);
        mergerSort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
public:
    vector<int> mergeSort(vector<int>& nums) {
        int n=nums.size();
        mergerSort(nums,0,n-1);
        return nums;
    }
};
```

**nums[i] = temp[i - low];**: Inside the loop, this line copies the element at index i - low from the temp array to index i in the nums array. The reason for subtracting low from i is that the temp array contains the merged elements starting from the beginning of the subarray (low), so we need to **adjust the index accordingly.**

For example, if low is 3 and high is 6, the loop will iterate from i = 3 to i = 6. The corresponding indices in the temp array will be **3 - 3 = 0, 4 - 3 = 1, 5 - 3 = 2, and 6 - 3 = 3**. Thus, the elements temp[0], temp[1], temp[2], and temp[3] will be copied to nums[3], nums[4], nums[5], and nums[6], respectively.
