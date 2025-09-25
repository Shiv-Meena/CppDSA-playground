**BRUTE**

The extremely naive approach is to get the answer by checking all the elements of the given matrix. So, traverse each cell of the matrix and check every element, if it is equal to the given ‘target’.

Time Complexity: O(N X M), where N is the number of rows in the matrix, M is the number of columns in each row. As, nested loops are being used to traverse the matrix.

Space Complexity: As no additional space is used, so the Space Complexity is O(1).

**BETTER**

As each row of the given matrix is sorted, it means the first element of each row will be less than or equal to the last element of each row. Therefore, for each row, check if the target belongs to that particular row. This can be done by verifying if the target lies between the first and the last element of the row. Once the row in which the target might lie has been identified, use the binary search algorithm on that row to check if the target is actually present. If it is, return true; otherwise, return false.

Time Complexity: O(N + logM), where N is given row number, M is given column number. The rows are traversed in O(N) time complexity. Binary search is applied only once for a particular row, resulting in a time complexity of O(N + logM) instead of O(N*logM).

Space Complexity: As no additional space is used, so the Space Complexity is O(1).

**OPTIMAL**
Time Complexity:O(log(m*n)) because it performs binary search on a matrix of size m*n.

Space Complexity:O(1) because it uses a constant amount of extra space.

![WhatsApp Image 2025-09-25 at 20 26 12_251e5dfb](https://github.com/user-attachments/assets/ad75ee20-8c20-48da-98d3-4d35a44e874a)

```cpp
class Solution{
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=(m*n)-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/m;
            int col=mid%m;
            if(mat[row][col]==target) return true;
            else if(mat[row][col]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
};
