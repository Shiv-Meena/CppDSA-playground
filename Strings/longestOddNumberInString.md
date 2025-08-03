![WhatsApp Image 2025-01-09 at 10 13 23_c903c4a5](https://github.com/user-attachments/assets/9569c787-ec54-44fd-a4a4-6ba8e631ff37)

TC: O(N) SC: O(N)

```cpp
class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; --i) {
        if ((num[i] - '0') % 2 != 0) {
            return num.substr(0, i + 1);
        }
    }
    return "";
    }
};
