Time Complexity:The time complexity is O(log n) because it uses binary search.

Space Complexity:The space complexity is O(1) because it uses a constant amount of extra space.

![WhatsApp Image 2025-09-20 at 17 41 20_53413c8c](https://github.com/user-attachments/assets/0887837d-55b2-4fa1-a36f-b43f5b51037b)
![WhatsApp Image 2025-09-20 at 17 41 19_c95ddd8a](https://github.com/user-attachments/assets/9edcda7e-eaaa-4dc3-94eb-5d3ee1ec904d)

```cpp
class Solution {
public:
    int findPeakElement(vector<int> &arr) {
      int n=arr.size();
      int low=0;
      int high=n-1;
      if(n==1) return 0;
      while(low<=high){
        int mid=low+(high-low)/2;
        if((mid==n-1 || arr[mid]>arr[mid+1]) && (mid==0 || arr[mid]>arr[mid-1])){
            return mid;
        }else if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }else{
            high=mid-1;
        }
      }
      return 0;
    }
};
