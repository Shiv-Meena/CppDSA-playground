Time Complexity:O(n^2) due to nested loops for transposing and O(n^2) for reversing each row, resulting in O(n^2) overall.

Space Complexity:O(1) as the rotation is done in-place.

approach: ![WhatsApp Image 2025-08-18 at 15 24 30_babbdfe2](https://github.com/user-attachments/assets/eb714c5f-662e-4b93-92f7-742a738001fe)


```cpp
class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
