Time Complexity:The time complexity is O(c), where c is the column number, due to the loop in the nCr function which iterates 'r' times, and 'r' is optimized to be min(c-1, r-c).

Space Complexity:The space complexity is O(1) because the algorithm uses a constant amount of extra space, regardless of the input size. The variables res, i, n, and r consume a fixed amount of memory.
![WhatsApp Image 2025-08-18 at 12 35 50_06be0e57](https://github.com/user-attachments/assets/8cf318ed-d878-42fa-a16f-e6d47a5fff60)

```CPP
class Solution {
private:

    int nCr(int n,int r){
        if(r>n-r) r=n-r;
        if(r==1) return n;
        int res=1;
        for(int i=0;i<r;i++){
            res=res*(n-i);
            res=res/(i+1);
        }
        return res;

    }
public:
    int pascalTriangleI(int r, int c) {
        return nCr(r-1,c-1);
        // return ans;
    }
};
