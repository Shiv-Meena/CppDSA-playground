Recursive Stack Space
Each time a function calls itself, a new frame is added to the function call stack. The stack keeps track of the current function execution. When a base condition is met, the stack starts unwinding, returning the results in reverse order.

Stack Overflow
Any local machine has a limited resources. Stack overflow occurs when too many recursive calls are made without a base case , or the recursion depth exceeds the system's call stack limit. This causes the program to crash as the system runs out of stack space

Time Complexity
The time complexity of a recursive function is generally based on the number of recursive calls made. If a function makes one recursive call, the time complexity is O(n), where n is the depth of the recursion.

Space Complexity
The space complexity of a recursive function is determined by the maximum depth of the recursive call stack. If the function reaches a maximum recursion depth of n, the space complexity is O(n).

<img width="807" height="515" alt="image" src="https://github.com/user-attachments/assets/c4d765c1-a424-4f0b-b5ff-68d34b59e003" />


