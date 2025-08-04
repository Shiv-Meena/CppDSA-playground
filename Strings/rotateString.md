![WhatsApp Image 2025-08-04 at 23 30 28_d71e9787](https://github.com/user-attachments/assets/1d10ae5c-d35a-4cf4-93cb-54159aa5f471)
![WhatsApp Image 2025-08-04 at 23 30 28_c4a440d9](https://github.com/user-attachments/assets/9a15bbb0-4174-4b53-8a59-0f8000cce0bc)


BRUTE FORCE

Time Complexity:O(n^2) due to the nested operations of substr within a loop and string comparison.
Space Complexity:O(n) due to the creation of a new string 'ans' that can grow up to the size of the input string 's'

```cpp
class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			//your code goes here
            string ans="";
            int j=0;
            int n=s.length();
            if(s==goal) return true;
            if(s.length()!=goal.length()) return false;
            for(int i=0;i<s.length();i++){
                if(s.substr(i,n-i)==goal.substr(0,n-i)){
                   j=i;
                   break;
                }
            }
            ans=s.substr(j,n-1)+s.substr(0,j);
            if(goal==ans) return true;
            return false;
		}
};
```
OPTIMAL APPROACH

Time Complexity O(N) , because checking for a substring in s + s is linear in time.

Space Complexity O(N) for the space needed to store the concatenated string s + s.

```cpp
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.length()!=s.length()) return false;
        string doubles=s+s;
        return doubles.find(goal)!=string::npos;
    }
};
