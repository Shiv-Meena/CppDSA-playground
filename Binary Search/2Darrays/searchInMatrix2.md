Time Complexity:O(n + m) because in the worst case, the algorithm traverses one row and one column of the matrix.

Space Complexity:O(1) because the algorithm uses a constant amount of extra space.

![WhatsApp Image 2025-09-25 at 22 13 44_5efe7c16](https://github.com/user-attachments/assets/427f6a2a-59d0-4a2f-95b5-962b0717fc64)

```cpp
class Solution{
public:
 bool searchMatrix(vector<vector<int>> &matrix, int target){
      int n=matrix.size();
      int m=matrix[0].size();
      int row=0;
      int col=m-1;
      while(row<n && col>=0){
        if(matrix[row][col]==target){
            return true;
        }else if(matrix[row][col]>target){
            col--;
        }else{
            row++;
        }
      }
      return false;
    }
};
