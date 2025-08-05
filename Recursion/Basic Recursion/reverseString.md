

![WhatsApp Image 2025-08-05 at 08 49 59_732bff13](https://github.com/user-attachments/assets/785b2041-ca37-4632-b791-6aa1842cae71)

Time Complexity:O(n) due to the recursive calls reversing the string
Space Complexity:O(n) due to the call stack during recursion.

```cpp
class Solution{	
public:		
    void reverseSt(vector<char>& s,int i,int j){
        if(i>=j) return ;
        // char temp = s[i];
        // s[i] = s[j];
        // s[j] = temp;
        swap(s[i],s[j]);
        reverseSt(s,i+1,j-1);
        
    }
	vector<char> reverseString(vector<char>& s){
		//your code goes here
        int n=s.size();
        int i=0;
        int j=n-1;
        reverseSt(s,i,j);
        return s;
	}
};
