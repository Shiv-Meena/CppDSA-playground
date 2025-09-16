Time Complexity:O(log n) due to the binary search algorithm.

Space Complexity:O(1) because it uses a constant amount of extra space.
![WhatsApp Image 2025-09-16 at 08 41 50_e2453a4f](https://github.com/user-attachments/assets/779e5f9b-9ecc-4732-9cae-5c9f416cda2d)

```cpp
class Solution {
public:
    long long floorSqrt(long long n)  {
      long long low=0;
      long long high=n;
      long long mid;
      long long ans1;
      while(low<=high){
        mid=low+(high-low)/2;
        long long ans=mid*mid;
        // if(ans<=n) ans1=mid;
        if(ans>n){
            high=mid-1;
        }else{
            ans1=mid;
            low=mid+1;
        }
      }
      return ans1;
    }
};
