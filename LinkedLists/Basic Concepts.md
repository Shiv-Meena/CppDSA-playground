
Difference Between Node and Node*
In C++, the terms Node and Node* are related but refer to different concepts:

Node:
This represents a variable of type Node.
It is an instance of the Node structure or class.
When you declare a variable as Node, it directly holds the data and any member variables defined in the Node structure or class.
Example: Node node1; creates a Node object named node1.

Node*:
This represents a pointer to a Node type.
It does not hold the actual data but rather the memory address where a Node object is stored.
Using a pointer allows for dynamic memory allocation, meaning you can create and manage nodes at runtime using the new operator.
Example: Node* nodePtr = new Node(); creates a pointer to a dynamically allocated Node object.


cpp// Always cast when mixing the two
for(int i = 0; i < (int)arr.size(); i++)  // ✅ safe

<img width="514" height="310" alt="image" src="https://github.com/user-attachments/assets/79016e86-b281-4ecd-9caa-b29c099b2f60" />

Only Bug — free() instead of delete
cppfree(temp);   // ❌ wrong deallocation for C++ objects
delete temp;  // ✅ correct
Why it matters:

free() is a C function — only works with malloc()
new and delete are C++ — they also call constructors/destructors
Mixing them is undefined behavior — may work sometimes, crash randomly other times
