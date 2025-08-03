// Time Complexity:O(n) due to iterating through the input vector once and then iterating through the hash map which has at most n elements.
// Space Complexity:O(n) in the worst case where all elements in the input vector are distinct, thus storing n key-value pairs in the hash map.

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
