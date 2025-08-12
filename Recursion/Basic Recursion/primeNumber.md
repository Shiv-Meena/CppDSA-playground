Time Complexity:O(sqrt(n)) due to the recursive calls up to the square root of the input number
Space Complexity:O(sqrt(n)) due to the recursive call stack depth, proportional to the square root of the input number in the worst case.

![WhatsApp Image 2025-08-12 at 21 39 22_f82e0f05](https://github.com/user-attachments/assets/bb0cd574-50cb-440e-9fcb-d982a1bd00f4)

```cpp
class Solution{	
    private:
        bool prime(int i, int num){
            if(i>sqrt(num)) return true;
            if(num%i==0) return false;
            return prime(i+1,num);
        }
	public:
		bool checkPrime(int num){
			//your code goes here
            
            if(num<=1) return false;
            return prime(2,num);
		}
};

