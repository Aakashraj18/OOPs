# Abstraction in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
Data Abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information and hiding the details. It refers to providing only essential information about the data to the outside world, hiding the background details or implementation.

### Key Points
- Implemented using **Abstract Classes** and **Interfaces**.
- An abstract class is a class that contains at least one **pure virtual function** (a function declared with `= 0`).
- We cannot create objects of an abstract class.
- Helps in reducing programming complexity and effort.

### Example Syntax
```cpp
class AbstractClass {
public:
    virtual void show() = 0; // Pure Virtual Function
};
```
