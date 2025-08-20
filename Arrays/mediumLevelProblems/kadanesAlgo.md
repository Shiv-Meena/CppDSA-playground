Time Complexity:O(n) due to a single for loop iterating through the input vector of size n.

Space Complexity:O(1) because the algorithm uses a constant amount of extra space, regardless of the input size.

![WhatsApp Image 2025-08-20 at 23 50 07_3b6eb127](https://github.com/user-attachments/assets/2b04f48f-5800-4506-a17d-6dd5bd991d0e)
![WhatsApp Image 2025-08-20 at 23 50 07_47d09ec4](https://github.com/user-attachments/assets/71173d74-4b62-4c4d-b0f5-52f78b6688ec)

```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        // int mini=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maxi){
                
                maxi=sum;
            }
            // mini=min(mini,sum);
            if(sum<0){
                sum=0;
            }
            
        }
        return maxi;
    }
};
```


LOOK AT THE FOLLOW UP APPROACH ON TUF : https://takeuforward.org/plus/dsa/arrays/faqs-medium/kadane's-algorithm?tab=editorial
