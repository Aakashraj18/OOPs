# Hybrid Inheritance in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
Hybrid Inheritance is implemented by combining more than one type of inheritance. For example, combining Hierarchical inheritance and Multiple Inheritance creates a hybrid inheritance.

### Key Points
- Often leads to the **Diamond Problem** if multiple paths lead to the same base class.
- Can be complex to design and debug.
- Solved using `virtual` inheritance where necessary.

### Example Syntax
```cpp
// Combination of Multilevel and Multiple inheritance
class A { };
class B : public A { };
class C { };
class D : public B, public C { };
```
