# Diamond Problem (Multipath Inheritance) in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
The Diamond Problem occurs in hybrid inheritance when a derived class has two base classes that both inherit from a single common base class. This leads to the derived class inheriting two copies of the common base class's members, causing ambiguity and redundancy.

### Key Points
- It's called "Diamond" because the inheritance graph looks like a diamond.
- Resolved using **Virtual Base Classes** (the `virtual` keyword in inheritance).
- Virtual inheritance ensures only one copy of the base class is inherited.

### Example Syntax
```cpp
class Base { public: int x; };
class Derived1 : virtual public Base { };
class Derived2 : virtual public Base { };
class Final : public Derived1, public Derived2 { }; // Only 1 copy of 'x'
```
