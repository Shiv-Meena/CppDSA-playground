// Time Complexity:The time complexity is O(n), where n is the size of the input vector, due to iterating through half of the vector to reverse it.
// Space Complexity:The space complexity is O(1), as the reversal is done in-place without using additional memory that scales with the input size.

class Solution{	
	public:		
		void reverseString(vector<char>& s){
			//your code goes here
            for(int i=0;i<s.size()/2;i++){
                swap(s[i],s[s.size()-i-1]);
            }
		}
};
