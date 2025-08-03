// Time Complexity:O(n) due to iterating through the input vector and hash map.
// Space Complexity:O(n) due to using a hash map to store element frequencies.

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
    int n=nums.size();
    // int secondmaxele=0;
    int secondmaxfreq=-1;
    int maxfreq=0;
    int maxele=-1;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it:mpp){
        int freq=it.second;
        maxfreq=max(maxfreq,freq);
    }
    for(auto it:mpp){
        int ele=it.first;
        int freq2=it.second;
        if(freq2<maxfreq && freq2>secondmaxfreq){
            secondmaxfreq=freq2;
            maxele=ele;
        }else if(freq2==secondmaxfreq){
            maxele=min(maxele,ele);
        }
    }
    return maxele;
    }
};
