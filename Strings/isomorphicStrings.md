<img width="1022" height="402" alt="image" src="https://github.com/user-attachments/assets/cc695448-255e-4443-95fe-397fa632a896" />

<img width="1008" height="467" alt="image" src="https://github.com/user-attachments/assets/60e3bff8-8f02-470b-84af-061f2414933f" />

![WhatsApp Image 2025-08-04 at 20 31 37_9852e7c0](https://github.com/user-attachments/assets/b61606a8-a277-46a2-b740-e57b726b04cd)

![WhatsApp Image 2025-08-04 at 20 31 37_f2489b65](https://github.com/user-attachments/assets/0b711393-6cc1-48c6-bde8-123d08331556)


Time Complexity: O(N) where N is the length of the input strings, due to the single loop iterating through each character

Space Complexity: O(k) O(1) since the space used by the arrays is constant (256 fixed size) regardless of input size


```cpp
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[256]={0};
        int m2[256]={0};
        int n=s.length();
        for(int i=0;i<n;i++){
            if(m1[s[i]]!=m2[t[i]]) return false;
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
    }
};
