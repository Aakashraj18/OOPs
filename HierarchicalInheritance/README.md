# Hierarchical Inheritance in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
In Hierarchical Inheritance, more than one derived class inherits from a single base class. It is like a tree structure.

### Key Points
- One base class, multiple derived classes.
- Used when multiple classes share common properties defined in a single base class.

### Example Syntax
```cpp
class Vehicle { }; // Base
class Car : public Vehicle { }; // Derived 1
class Bike : public Vehicle { }; // Derived 2
```
