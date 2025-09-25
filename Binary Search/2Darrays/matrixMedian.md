Time Complexity:O(n * m * log(m) * log(max-min)), where n is the number of rows, m is the number of columns, and max-min is the difference between the maximum and minimum elements in the matrix.

Space Complexity:O(1), as the algorithm uses a constant amount of extra space.
![WhatsApp Image 2025-09-26 at 00 03 35_3dcfe585](https://github.com/user-attachments/assets/35a1b9cd-9997-4f03-8010-3663609bd551)
![WhatsApp Image 2025-09-26 at 00 03 36_649c4124](https://github.com/user-attachments/assets/e1b8a877-0a5c-4f93-91fe-11823d7e993c)
![WhatsApp Image 2025-09-26 at 00 03 36_8db6155d](https://github.com/user-attachments/assets/f6d7ab5a-9e4c-4637-8446-a647c071ea21)

```cpp
class Solution{
public:
    int upperbound(vector<int>& arr, int x, int n){
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>x){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
    int countsmallequals(vector<vector<int>> & matrix,int mid,int n,int m){
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=upperbound(matrix[i],mid,m);
        }
        return cnt;
    }
    int findMedian(vector<vector<int>>&matrix) {
      int n=matrix.size();
      int m=matrix[0].size();
      int low=INT_MAX;
      int high=INT_MIN;
      for(int i=0;i<n;i++){
        low=min(low,matrix[i][0]);
        high=max(high,matrix[i][m-1]);
      }
      int req=(m*n)/2;
      while(low<=high){
        int mid=(low+high)/2;
        if(countsmallequals(matrix,mid,n,m)>req){
            high=mid-1;
        }else{
            low=mid+1;
        }
      }
      return low;
    }
};
