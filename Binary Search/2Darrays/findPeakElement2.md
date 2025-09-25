Time Complexity:O(nlogm) because the while loop runs in O(logm) and maxele function takes O(n) time

Space Complexity:O(1) since the algorithm uses a constant amount of extra space
![WhatsApp Image 2025-09-25 at 22 49 45_b0a9749d](https://github.com/user-attachments/assets/7ea3fa3f-eaca-489b-8282-d116b071aad7)


```cpp
class Solution {
public:
    int maxele(vector<vector<int>>& mat, int n, int m , int mid){
        int maxi=-1;
        int index=-1;
        for(int j=0;j<n;j++){
            if(maxi<mat[j][mid]){
                maxi=mat[j][mid];
                index=j;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        // int max=INT_MIN;
        while(low<=high){
            int mid=(low+high)/2;
            int row=maxele(mat,n,m,mid);
            int left=mid-1>=0?mat[row][mid-1]:-1;
            int right=mid+1<m?mat[row][mid+1]:-1;
            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }else if(mat[row][mid]<left){
                high=mid-1;
            }else{
                low=mid+1;
            }
            
        }
        return{-1,-1};
    }
};
