Time Complexity:**O(n^2)** due to nested loops, where the outer loop iterates 'n' times and the inner loop iterates up to 'n' times in the worst case.

Space Complexity:**O(1)** as it uses a constant amount of extra space for variables like 'temp' and 'j', regardless of the input size.

![WhatsApp Image 2025-08-14 at 07 40 19_cc8168c9](https://github.com/user-attachments/assets/9d76fec4-c067-4690-9092-7270c8cb034f)
![WhatsApp Image 2025-08-14 at 07 40 19_bb179327](https://github.com/user-attachments/assets/fde4c305-b22d-44b2-b8bd-66578309b502)
![WhatsApp Image 2025-08-14 at 07 40 19_b4806e1a](https://github.com/user-attachments/assets/054f5728-1b6e-407f-b111-9f88f0457634)


```cpp
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            int temp=nums[i];
            int j=i-1;
            for(;j>=0;j--){
                if(nums[j]>temp){
                    nums[j+1]=nums[j];
                }else{
                    break;
                }
            }
            nums[j+1]=temp;
        }
        return nums;
    }
};
