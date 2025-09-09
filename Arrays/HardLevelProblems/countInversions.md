Time Complexity:O(n log n) due to the mergesort algorithm.
Space Complexity:O(n) due to the temporary array used in the merge function.

![WhatsApp Image 2025-09-09 at 13 03 30_aa56f7a6](https://github.com/user-attachments/assets/e8b19b3c-c3e1-4bfb-9a52-c0f71b8b7727)
![WhatsApp Image 2025-09-09 at 13 03 31_f1769a57](https://github.com/user-attachments/assets/8fee8232-3e74-49fa-abb3-f88bf8874207)
![WhatsApp Image 2025-09-09 at 13 03 31_59fc8019](https://github.com/user-attachments/assets/e4d42639-2a25-478c-9633-055f6d837f44)
![WhatsApp Image 2025-09-09 at 13 03 31_d2dcab37](https://github.com/user-attachments/assets/d08dd489-97fe-4d68-9c5f-35c9ed8ecdcc)

```cpp
class Solution {

long long merge(vector<int>&arr, int low,int high,int mid){
    int left=low;
    int right=mid+1;
    long long cnt=0;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            cnt+=(mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        
            right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    return cnt;
}
long long mergesort(vector<int>&arr,int low,int high){
    long long cnt=0;
    if(low<high){
    
    int mid=low+(high-low)/2;
    cnt+= mergesort(arr,low,mid);
    cnt+= mergesort(arr,mid+1,high);
    cnt+= merge(arr,low,high,mid);  
    }
    return cnt;
}
public:
   long long int numberOfInversions(vector<int> nums) {
        int n=nums.size();
        return mergesort(nums,0,n-1);
        // return cnt;
    }
};
