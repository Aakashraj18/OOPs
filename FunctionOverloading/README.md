# Function Overloading in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
Function Overloading is a feature in C++ where two or more functions can have the same name but different parameters. It is an example of **Compile-time Polymorphism**.

### Key Points
- Overloaded functions must differ in the **number of arguments** or the **type of arguments** (or both).
- Return type alone is NOT sufficient for function overloading.
- Increases the readability of the program.

### Example Syntax
```cpp
void print(int i) { cout << "Int: " << i; }
void print(double d) { cout << "Double: " << d; }
```
