
Time Complexity:O(n + m) where n and m are the sizes of the input vectors nums1 and nums2 respectively.

Space Complexity:O(min(n, m)) in the worst case, where n and m are the sizes of the input vectors, due to the 'temp' vector potentially storing all elements of the smaller vector if all elements intersect.

```cpp
class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> temp;
        int i=0;
        int j=0;
        int mini=min(n,m);
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                temp.push_back(nums1[i]);
                i++;j++;
            }else if(nums1[i]<nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        return temp;
    }
};
