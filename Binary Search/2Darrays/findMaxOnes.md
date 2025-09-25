**BRUTE FORCE**
Time Complexity:O(n*m) due to nested loops iterating through each element of the matrix.

Space Complexity:O(1) as it uses a fixed number of variables, regardless of the input size

```cpp
class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat) {
    int n=mat.size();
    int m=mat[0].size();
    int cntmax =0;
    int index=-1;
    // unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            if(mat[i][j]==1){
                cnt++;
            }
            
        }
        if(cnt>cntmax){
                cntmax=cnt;
                index=i;
            }
    }
    return index;
  }
};
```
**OPTIMAL APPROACH**
Time Complexity:O(n*log(m)), where n is the number of rows and m is the number of columns.

Space Complexity:O(1), as the algorithm uses a constant amount of extra space.

![WhatsApp Image 2025-09-25 at 20 04 54_bdb1b1e1](https://github.com/user-attachments/assets/377a8fd0-b887-4ad9-8f17-263568ee621a)
```cpp
class Solution {
  public:   
  int rowWithMax1s(vector<vector<int>> &mat) {
    int n = mat.size();       // number of rows
    int m = mat[0].size();    // number of columns
    int cntmax = 0;           // max number of 1s found so far
    int index = -1;           // row index with max 1s

    for (int i = 0; i < n; i++) {   // loop through each row
        int low = 0, high = m - 1;

        // 🔍 Binary search to find the first occurrence of 1 in row i
        while (low <= high) {
            int mid = (low + high) / 2;
            if (mat[i][mid] == 1) {
                high = mid - 1;   // look left for earlier 1
            } else {
                low = mid + 1;    // look right if still 0
            }
        }

        // After loop, 'low' is the index of the first 1 in row i
        int cnt = m - low;  // total 1s in this row

        // update answer if this row has more 1s than previous max
        if (cnt > cntmax) {
            cntmax = cnt;
            index = i;
        }
    }
    return index;
  }
};
