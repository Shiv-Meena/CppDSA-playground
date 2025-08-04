![WhatsApp Image 2025-08-04 at 23 54 53_be4c30b5](https://github.com/user-attachments/assets/537e7553-bb74-43ef-8b10-53430afb91b8)


Time Complexity:O(n) because the code iterates through the strings 's' and 't' once, where 'n' is the length of the strings.
Space Complexity:O(1) because the space used by the unordered map 'mpp' is limited by the size

```cpp
class Solution{	
	public:
		bool anagramStrings(string& s,string t){
			//your code goes here
            if(s.length()!=t.length()) return false;
            unordered_map<char ,int> mpp;
            for(char c: s){
                mpp[c]++;
            }
            for(char c:t){
                if((mpp.find(c)==mpp.end()) || mpp[c]==0) return false;
                mpp[c]--;
            }
            return true;
		}
};
