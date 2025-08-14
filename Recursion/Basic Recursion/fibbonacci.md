Time Complexity:O(2^n) due to the exponential growth of recursive calls.
Space Complexity:O(n) due to the maximum depth of the recursion tree.

```cpp
class Solution {
public:
    int fib(int n) {
        //your code goes here
        if(n==1) return 1;
        if(n==0) return 0;
        return fib(n-1)+fib(n-2);
    }
};
