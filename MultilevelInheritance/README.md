# Multilevel Inheritance in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
In Multilevel Inheritance, a derived class is created from another derived class. It forms a chain of inheritance.

### Key Points
- Example: Class A is a base class for Class B, and Class B is a base class for Class C.
- Transitive nature: Class C inherits properties of both B and A.

### Example Syntax
```cpp
class Grandparent { };
class Parent : public Grandparent { };
class Child : public Parent { };
```
