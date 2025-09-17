Time Complexity:The time complexity is O(log(M) * N), where M is the input integer and N is the Nth root.

Space Complexity:The space complexity is O(1), as it uses constant extra space.

Need of a helper function to find the exponent of the number: If the given numbers M and N are big enough, the value of midN can not be stored in a variable. So to resolve this problem, implement a helper function.

![WhatsApp Image 2025-09-17 at 08 05 02_714cad8e](https://github.com/user-attachments/assets/bc2fe60c-a1ce-4e01-9b62-1b7be5900fdb)
![WhatsApp Image 2025-09-17 at 08 05 02_1c216378](https://github.com/user-attachments/assets/0286b3e7-7a8f-4eae-a69f-eaf53d5888b7)
![WhatsApp Image 2025-09-17 at 08 05 02_301fe06d](https://github.com/user-attachments/assets/da7e61f3-6716-4503-b14d-29ff9a08ed60)

```cpp
class Solution {
public:
    // helper function to calculate mid^N
    // 1-> Nth root found
    // 2-> Nth root is greater than mid
    // 0-> Nth root is smaller than mid
    int helper(int n,int mid,int m){
        long long ans=1;
        for(int i=0;i<n;i++){
            ans=ans*mid;
            // if ans becomes greater then m , then there is no point in going further as our final answer will always lie in range [1,M]
            if(ans>m) return 2;
        }
        if(ans==m) return 1;
        return 0;
    }
  int NthRoot(int N, int M) {
        int low=1;
        int high=M;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(helper(N,mid,M)==1) return mid;
            else if(helper(N,mid,M)==0) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};
