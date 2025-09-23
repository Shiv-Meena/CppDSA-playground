Time Complexity:O(log(min(n, m))), due to the binary search on the smaller array

Space Complexity:O(1), as the algorithm uses a constant amount of extra space

![WhatsApp Image 2025-09-23 at 10 49 16_6db88dce](https://github.com/user-attachments/assets/3a5c9547-212e-4dd3-9312-26815a69434e)
![WhatsApp Image 2025-09-23 at 10 49 16_61b43a24](https://github.com/user-attachments/assets/7c4330ae-fcb4-4426-8d34-bb17ce9537e6)
![WhatsApp Image 2025-09-23 at 10 49 16_fb0439d7](https://github.com/user-attachments/assets/ced5ba03-55d3-4c55-abb9-da8e4e3460fa)


```cpp
class Solution {
public:
    int kthElement(vector<int> &a, vector<int>& b, int k) {
        int n=a.size();
        int m=b.size();
        if(n>m) return kthElement(b,a,k);
        int left=k;
        // int low=0;int high=n;
        int low = max(0, k - m), high = min(k, n);
        while(low<=high){
            int mid1=(low+high)/2;
            int mid2=left-mid1;
            int l1=(mid1>0)?a[mid1-1]:INT_MIN;
            int l2=(mid2>0)?b[mid2-1]:INT_MIN;
            int r1=(mid1<n)?a[mid1]:INT_MAX;
            int r2=(mid2<m)?b[mid2]:INT_MAX;
            if(l1<=r2 && l2<=r1){
                return max(l1,l2);
            }
            else if(l1>r2){
                high=mid1-1;
            }else{
                low=mid1+1;
            }
        }
        return 0;
  }
};
