![WhatsApp Image 2025-08-03 at 23 57 53_49d6992d](https://github.com/user-attachments/assets/64e8be0d-1eb1-4cbb-a81e-0263625577ff)


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
