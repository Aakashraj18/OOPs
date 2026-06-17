# Encapsulation in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
Encapsulation in C++ is defined as wrapping up of data and information under a single unit. In Object-Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulate them.

### Key Points
- It leads to **Data Hiding** because the data in a class is hidden from other classes using access specifiers (`private`, `protected`).
- We can implement encapsulation using **Classes** and **Access Specifiers**.
- It helps in protecting the data from accidental modification.

### Example Syntax
```cpp
class EncapsulatedClass {
private:
    int hiddenData; // Data hiding
public:
    void setData(int d) { hiddenData = d; }
    int getData() { return hiddenData; }
};
```
