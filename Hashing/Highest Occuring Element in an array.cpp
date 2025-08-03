//Time Complexity: O(n) + O(n) which simplifies to O(n), where n is the size of the input vector nums.
//Space Complexity:O(n) in the worst case, where n is the number of unique elements in the input vector nums, due to the space used by the unordered map.

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int , int> mpp;
        int n=nums.size();
        int maxele=0;
        int maxfreq=0;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            int ele=it.first;
            int freq=it.second;
            if(freq>maxfreq){
                maxfreq=freq;
                maxele=ele;
            }
            else if(freq==maxfreq){
                maxele=min(maxele,ele);
            }
        }
        return maxele;
    }
};
