Time Complexity:The time complexity is O(log(min(n, m))) due to the binary search on the smaller array.

Space Complexity:The space complexity is O(1) as it uses constant extra space.
![WhatsApp Image 2025-09-22 at 21 10 25_d684a39d](https://github.com/user-attachments/assets/9cded189-32aa-4bf6-8121-a86bccaa912b)
![WhatsApp Image 2025-09-22 at 21 10 25_ac65b141](https://github.com/user-attachments/assets/629c7d2b-241f-45a1-aace-c4d938265835)
![WhatsApp Image 2025-09-22 at 21 10 25_47373dc8](https://github.com/user-attachments/assets/169a5a47-3069-44d2-ba10-99911597058d)
![WhatsApp Image 2025-09-22 at 21 10 25_ecb69896](https://github.com/user-attachments/assets/7b0d2b58-815f-40c5-b7af-d11075aa609f)
![WhatsApp Image 2025-09-22 at 21 10 25_7bf7c81a](https://github.com/user-attachments/assets/2a7b9579-a343-4aac-a10c-20f369f670b9)


```cpp
class Solution {
public:
    double median(vector<int> &arr1, vector<int> &arr2) {
     int n=arr1.size();
     int m=arr2.size();
     int x=n+m;
     if(n>m) return median(arr2,arr1);
     int left=(m+n+1)/2;
     int low=0;int high=n;
     while(low<=high){
        int mid1=(low+high)/2;
        int mid2=left-mid1;
        int l1=(mid1>0)?arr1[mid1-1]:INT_MIN;
        int l2=(mid2>0)?arr2[mid2-1]:INT_MIN;
        int r1=(mid1<n)?arr1[mid1]:INT_MAX;
        int r2=(mid2<m)?arr2[mid2]:INT_MAX;
        if(l1<=r2 && l2<=r1) {
            if(x%2==1) return max(l1,l2);
            else{
                return double(max(l1,l2)+min(r1,r2))/2;
            }
        }
        if(l1>r2){
            high=mid1-1;
        }else{
            low=mid1+1;
        }
        
     }
     return 0;
    }
};
