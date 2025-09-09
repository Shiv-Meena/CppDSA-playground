Time Complexity:The time complexity is O(n log n) due to the merge sort algorithm.
Space Complexity:The space complexity is O(n) due to the temporary array used in the merge function.
![WhatsApp Image 2025-09-09 at 14 06 42_25c72525](https://github.com/user-attachments/assets/3b671bd1-16ac-4728-a952-c70b9fc165b9)
![WhatsApp Image 2025-09-09 at 14 06 43_72782ec2](https://github.com/user-attachments/assets/f85d2545-b9dc-494a-a743-9602f6a71d50)
![WhatsApp Image 2025-09-09 at 14 06 43_2a48c7c1](https://github.com/user-attachments/assets/12272fd6-c09c-4789-bdc1-d832437546e0)
![WhatsApp Image 2025-09-09 at 14 06 43_f3e6d0fa](https://github.com/user-attachments/assets/e6922269-32f4-4fda-a00e-eca2fb0b8078)


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
long long countpairs(vector<int> & arr,int low,int high,int mid){
    long long cnt=0;
    int right=mid+1;
    for(int i=low;i<=mid;i++){
        while(right<=high && (long long)arr[i]>2LL*arr[right]){
            right++;
        }
        cnt+=right-(mid+1);
    }
    return cnt;
}
long long mergesort(vector<int>&arr,int low,int high){
    long long cnt=0;
    if(low<high){
    
    int mid=low+(high-low)/2;
    cnt+= mergesort(arr,low,mid);
    cnt+= mergesort(arr,mid+1,high);
    cnt+=countpairs(arr,low,high,mid);
    cnt+= merge(arr,low,high,mid);  
    }
    return cnt;
}
public:
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergesort(nums,0,n-1);
    }
};
