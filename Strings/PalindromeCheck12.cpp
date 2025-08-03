// Time Complexity:O(n), where n is the length of the string, due to the loop iterating up to n/2.
// Space Complexity:O(1), as the algorithm uses a constant amount of extra space.

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            for(int i=0;i<s.length()/2;i++){
                if(s[i]!=s[s.length()-i-1]){
                    return false;
                }
            }
            return true;
		}
};
