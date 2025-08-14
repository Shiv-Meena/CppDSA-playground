Time Complexity:The time complexity is O(log(num)) where num is the input number. Each recursive call reduces the number by roughly a factor of 10, and the number of digits is logarithmic to the base 10.
Space Complexity:The space complexity is O(log(num)) due to the recursive call stack, where num is the input number. Each call to addDigits adds a new frame to the call stack.

![WhatsApp Image 2025-08-14 at 06 05 39_c05f6382](https://github.com/user-attachments/assets/c4088334-bf40-400c-a6eb-99a3d28bd78c)

```cpp
class Solution{
private:
    int sumi(int n){
        if(n==0) return 0;
        return sumi(n/10)+(n%10);
    }
public:
	int addDigits(int num){
		//your code goes here
        if(num<10) return num;
        int sum=sumi(num);
        return addDigits(sum);
	}
};
