Time Complexity:The time complexity is O(n^2) because the outer loop iterates 'n' times, and the inner function pascalTriangleII takes O(n) time.

Space Complexity:The space complexity is O(n^2) because the 'ans' vector stores 'n' vectors, and each vector can have a maximum size of 'n'.

```cpp
class Solution {
     vector<int> pascalTriangleII(int r) {
        int prev=1;
        vector<int> temp;
        temp.push_back(prev);
        int curr;
        int curr1;
        for(int i=1;i<r;i++){
            curr1=prev*((r-i));
            int curr=curr1/i;
            temp.push_back(curr);
            prev=curr;

        }
        return temp;
    }
public:
    vector<vector<int>> pascalTriangleIII(int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        for(int i=1;i<=n;i++){
            temp=pascalTriangleII(i);
            ans.push_back(temp);
        }
        return ans;
    }
};
