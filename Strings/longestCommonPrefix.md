![WhatsApp Image 2025-08-04 at 01 45 30_cffa8a39](https://github.com/user-attachments/assets/b83a712e-5710-4592-aa7c-59188a72db64)

Time Complexity: O(N * M * log N), where N is the number of strings and M is the maximum length of a string. The sorting operation takes O(N * M * log N) time, and the comparison of characters in the first and last strings takes O(M) time, which is dominated by the sorting step.

Space Complexity: O(M), as the ans variable can store the length of the prefix which in the worst case will be O(M).

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int i,j=0;
        int n=strs.size();
        string ans="";
        string first=strs[0];
        string last=strs[n-1];
        int minlen=min(last.size(),first.size());
        for(int i=0;i<minlen;i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};
