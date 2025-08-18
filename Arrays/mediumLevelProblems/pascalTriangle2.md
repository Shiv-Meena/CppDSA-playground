Time Complexity:O(r) due to the single loop that iterates up to r.

Space Complexity:O(r) because the vector 'temp' stores 'r' elements.
![WhatsApp Image 2025-08-18 at 12 59 59_ce3c73a4](https://github.com/user-attachments/assets/8c9fb371-7b0b-435e-b847-d70aa67185eb)


```cpp
class Solution {
  
public:
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
};
