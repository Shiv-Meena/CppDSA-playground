Time Complexity:O(n) due to the single for loop iterating through the input vector nums.

Space Complexity:O(1) as the algorithm uses a constant amount of extra space, regardless of the input size. Although a vector of size 2 is returned, it's size is constant.
![WhatsApp Image 2025-08-24 at 19 00 33_848e4059](https://github.com/user-attachments/assets/57ca2633-5d0a-4f66-97a8-0e144fd318fc)

```cpp
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n=nums.size();
        long long s= n*(n+1)/2;
        long long sn=n*(n+1)*(2*n+1)/6;
        long long s1=0;long long s2n=0;
         for(long long i=0;i<n;i++){
            s1+= nums[i];
            s2n+= (long long)nums[i]*(long long)nums[i];
         }
        //  X-Y
         long long val1=s1-s;       
        //  X2-Y2       
         long long val2=s2n-sn;
        // X+Y = (X2-Y2)/(X-Y)
        long long ans=val2/val1;
        // X -> RepeatingNum
        int x=(ans+val1)/2;
        // Y -> MissingNum
        int y=ans-x;
        return {(int)x,(int)y};


    }
};
