# Operator Overloading in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
Operator Overloading is a type of polymorphism in which an operator is overloaded to give user-defined meaning to it. For example, using the `+` operator to add two user-defined objects like complex numbers or strings.

### Key Points
- Achieved using a special `operator` function.
- It is a form of **Compile-time Polymorphism**.
- Some operators cannot be overloaded: `.`, `::`, `?:`, `sizeof`.

### Example Syntax
```cpp
class Complex {
public:
    int real, imag;
    Complex operator + (Complex const &obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
};
```
