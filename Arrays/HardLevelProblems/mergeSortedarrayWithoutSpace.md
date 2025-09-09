Time Complexity:O(min(m,n)) + O(mlogm) + O(nlogn) + O(n), which simplifies to O(mlogm + nlogn)

Space Complexity:O(1)
WATCH OPTIMAL2 VIDEO ,THIS IS OPTIMAL 1
![WhatsApp Image 2025-09-09 at 15 24 29_e906b413](https://github.com/user-attachments/assets/279bc91a-6ce0-4d2a-8e35-503186c317c7)

```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=m-1;
        int right=0;
        while(left>=0 && right<n){
            if(nums1[left]>nums2[right]){
                swap(nums1[left],nums2[right]);
                left--;right++;
            }else{
                break;
            }
        }
        sort(nums1.begin()+0,nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
    }
};
