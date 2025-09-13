Time Complexity:O(log n) due to binary search within the input array.

Space Complexity:O(1) as it uses a constant amount of extra space.
![WhatsApp Image 2025-09-13 at 16 45 59_10cb5b9f](https://github.com/user-attachments/assets/3213a7c1-229a-42b7-accc-718ab74c4118)
![WhatsApp Image 2025-09-13 at 16 45 59_6e999d16](https://github.com/user-attachments/assets/eb5689eb-6695-41ad-a62e-4db329515c67)


```cpp
class Solution {
public:
    int findMin(vector<int> &arr)  {
      int n=arr.size();
      int low=0;
      int high=n-1;
      int ans=INT_MAX;
      while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[low]);
            low=mid+1;
        }else{
            ans=min(ans,arr[mid]);
            high=mid-1;
        }
      }
      return ans;
    }
};
