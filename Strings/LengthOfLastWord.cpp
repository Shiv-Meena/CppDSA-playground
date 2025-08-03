// TC : O(N)   SC: O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        for(int i=s.length()-1;i>=0;i--){
            if((s[i]>=65 && s[i]<=90 || s[i]>=97 &&s[i]<=122)  ){
                len++;
            }
            if(s[i]==32 && len>0) break;
        }
        return len;
    }
};
