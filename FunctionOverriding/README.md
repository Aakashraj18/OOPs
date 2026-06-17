# Function Overriding in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base class function is said to be overridden.

### Key Points
- Used for achieving **Runtime Polymorphism** (when combined with `virtual` functions and pointers).
- The function signature (name, parameters, return type) must be exactly the same in both the base and derived class.
- Often used to provide a specific implementation of a function that is already provided by its base class.

### Example Syntax
```cpp
class Base { public: virtual void show() { cout << "Base"; } };
class Derived : public Base { public: void show() { cout << "Derived"; } };
```
