# Ambiguity in Multiple Inheritance
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
Ambiguity in Multiple Inheritance occurs when a derived class inherits from two or more base classes that have a function with the exact same name. The compiler gets confused about which base class's function to call.

### Key Points
- Solved using the **Scope Resolution Operator (`::`)**.
- You explicitly mention the class name whose function you want to invoke.

### Example Syntax
```cpp
class Base1 { public: void show() { } };
class Base2 { public: void show() { } };
class Derived : public Base1, public Base2 { };

int main() {
    Derived obj;
    // obj.show(); // Error: Ambiguous
    obj.Base1::show(); // Correctly calls Base1's show
    return 0;
}
```
