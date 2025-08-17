Time Complexity:O(m*n) where m is the number of rows and n is the number of columns in the matrix, as each element is visited once.

Space Complexity:O(1) excluding the output array, otherwise it is O(m*n) because the size of the answer vector is m*n.

APPROACH
1. Print first row
2. print last column
3. print last row backwords
4. print first column backwards
5. repeat
```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> ans;
        int count=0;
        int total=m*n;
        int startRow=0;
        int endCol=n-1;
        int endRow=m-1;
        int startCol=0;
        while(count<total){
            for(int i=startCol;count<total && i<=endCol;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;
            for(int i=startRow;count<total && i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;
            for(int i=endCol;count<total && i>=startCol;i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;
            for(int i=endRow;count<total && i>=startRow;i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};
