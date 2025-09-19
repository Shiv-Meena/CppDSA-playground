Time Complexity:O(n log n) due to sorting, and O(n log(range)) due to binary search where range is the difference between the largest and smallest element, and O(n) for canweplace function.

Space Complexity:O(1) as the algorithm uses a constant amount of extra space.
![WhatsApp Image 2025-09-19 at 08 01 05_2afa995a](https://github.com/user-attachments/assets/8ddf5667-c3ec-494b-bb28-1b0b6229abd2)
![WhatsApp Image 2025-09-19 at 08 01 05_4bd93c3f](https://github.com/user-attachments/assets/a1d56e14-af70-456d-a515-e504e6114a9f)


```cpp
class Solution {
public:
    bool canweplace(vector<int> & nums, int dist , int cows){
        int noofcows=1;
        int n=nums.size();
        // last represents the pos of last placed cow
        int last=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]-last>=dist){
                noofcows++;
                last=nums[i];
            }
        }
        // if number of cows remains smaller than k , it means that it is not possible to place the cows with mid as maximum possible minimum distance
        if(noofcows>=cows) return true;
        return false;
    }
    int aggressiveCows(vector<int> &nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=1;
        int high=nums[n-1]-nums[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canweplace(nums,mid,k)==true){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return high;
    }
};
