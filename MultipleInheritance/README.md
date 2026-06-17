# Multiple Inheritance in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e., one subclass is inherited from more than one base class.

### Key Points
- A derived class has multiple direct base classes.
- Syntax involves separating base classes with commas.
- Can lead to ambiguity (e.g., Diamond problem) which must be managed with scope resolution or virtual base classes.

### Example Syntax
```cpp
class Base1 { };
class Base2 { };
class Derived : public Base1, public Base2 { };
```
