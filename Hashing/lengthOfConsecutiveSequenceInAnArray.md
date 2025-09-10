Time Complexity:O(n) in average case and O(n^2) in worst case, due to the unordered_map lookups and the nested while loop.

Space Complexity:O(n) due to the unordered_map storing at most n elements.
![WhatsApp Image 2025-09-10 at 11 30 24_72f1e303](https://github.com/user-attachments/assets/bda47ca8-0d19-4df2-abca-32099a3c5b4c)

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mpp;
       int n=nums.size();
       if(n==0) return 0;
       for(int i=0;i<n;i++){
        mpp[nums[i]++];
       } 
       int maxcnt=1;
       for(auto it:mpp){
        
        int key=it.first;
        //  Check if 'it' is a starting number of a sequence
        if(mpp.find((key)-1) == mpp.end()){
            int cnt=1;
        while(mpp.find((key)+1) != mpp.end()){
            cnt++;
            key++;
        }
        maxcnt=max(maxcnt,cnt);
       }
       }
       return maxcnt;
    }
};
