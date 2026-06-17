# Class in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
A Class is a user-defined data type in C++. It is the building block that leads to Object-Oriented programming. It acts as a blueprint for creating objects. A class contains data members and member functions, whose access is governed by the three access specifiers (private, protected, public).

### Key Points
- By default, members of a class are **private**.
- Classes do not allocate memory when they are defined; memory is allocated when an object is instantiated.
- Declared using the `class` keyword.

### Example Syntax
```cpp
class MyClass {
    // private by default
    int data;
public:
    void function();
};
```
