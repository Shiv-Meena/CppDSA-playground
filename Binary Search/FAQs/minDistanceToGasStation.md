Time Complexity:O(n*log(max_distance/1e-6)), where n is the size of the array and max_distance is the maximum difference between adjacent elements in the array.

Space Complexity:O(1)

![WhatsApp Image 2025-09-25 at 15 39 30_0292ab84](https://github.com/user-attachments/assets/3c92525c-269b-470c-bbda-17fd858e467f)
![WhatsApp Image 2025-09-25 at 15 39 30_b848ddf8](https://github.com/user-attachments/assets/52a2c976-05fa-47d6-b3c4-66670344715f)
![WhatsApp Image 2025-09-25 at 15 39 30_d3824566](https://github.com/user-attachments/assets/dab71d07-f1bb-4dc8-a121-eb81e4e263e4)
![WhatsApp Image 2025-09-25 at 15 39 30_f39613d4](https://github.com/user-attachments/assets/11cd9720-32f5-440a-a7f5-887794672c69)
![WhatsApp Image 2025-09-25 at 15 39 30_682b4016](https://github.com/user-attachments/assets/c6dd15a6-77c3-47ee-803c-67c0bc3c4ff1)

```cpp
class Solution {
public:
    int numberOfGasStationsRequired(vector<int> &arr, long double dist){
        int n=arr.size();
        int cnt=0;
        for(int i=1;i<n;i++){
        int noinbetween=(arr[i]-arr[i-1])/dist;
        if(arr[i]-arr[i-1]==(dist*noinbetween)){
            noinbetween--;
        }
        cnt+=noinbetween;
        }
        return cnt;
    }
    long double minimiseMaxDistance(vector<int> &arr, int k) {
       int n=arr.size();
       long double low=0;
       long double high=0;
       long double ans;
       for(int i=0;i<n-1;i++){
            high=max(high,(long double)(arr[i + 1] - arr[i]));
       }
       long double diff=1e-6;
       while(high-low>diff){
        long double mid=(low+high)/2.0;
        int cnt=numberOfGasStationsRequired(arr,mid);
        if(cnt>k){
            low=mid;
        }else{
            // ans=mid;
            high=mid;
        }
       }
       return high;
    }
};
